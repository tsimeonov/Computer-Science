/*
  ==============================================================================

    SamplerComponent.cpp
    Created: 11 Sep 2026 4:08:48pm
    Author:  Todor simeonov

  ==============================================================================
*/

#include "SamplerComponent.h"

using namespace std;

SamplerComponent::SamplerComponent(AudioFormatManager& _formatManager)
    : formatManager(_formatManager)
{
    addAndMakeVisible(recordMicButton);
    addAndMakeVisible(recordDeckButton);
    addAndMakeVisible(deleteButton);
    
    recordMicButton.addListener(this);
    recordDeckButton.addListener(this);
    deleteButton.addListener(this);

    sampleList.setModel(this);
    addAndMakeVisible(sampleList);

    // FIX 1: Save to the Desktop so we guarantee macOS gives us write permissions
    sampleFolder = File::getSpecialLocation(File::userDesktopDirectory).getChildFile("OtoDecks_Samples");
    if (!sampleFolder.exists()) {
        sampleFolder.createDirectory();
    }

    loadSamplesFromDisk();
}

SamplerComponent::~SamplerComponent() {}

void SamplerComponent::paint(Graphics& g)
{
    g.fillAll(Colours::darkgrey);
    g.setColour(Colours::white);
    g.drawRect(getLocalBounds(), 1);
}

void SamplerComponent::resized()
{
    int buttonHeight = 40;
    int btnWidth = getWidth() / 3;
    
    recordMicButton.setBounds(0, 0, btnWidth, buttonHeight);
    recordDeckButton.setBounds(btnWidth, 0, btnWidth, buttonHeight);
    deleteButton.setBounds(btnWidth * 2, 0, btnWidth, buttonHeight);
    
    sampleList.setBounds(0, buttonHeight, getWidth(), getHeight() - buttonHeight);
}

void SamplerComponent::loadSamplesFromDisk()
{
    savedSamples.clear();
    Array<File> filesInFolder = sampleFolder.findChildFiles(File::findFiles, false, "*.wav");
    for (File& f : filesInFolder) savedSamples.push_back(f);
    sampleList.updateContent();
}

int SamplerComponent::getNumRows() { return savedSamples.size(); }

void SamplerComponent::paintListBoxItem(int rowNumber, Graphics& g, int width, int height, bool rowIsSelected)
{
    g.fillAll(rowIsSelected ? Colours::orange : Colours::black);
    g.setColour(Colours::white);
    g.setFont(14.0f);
    if (rowNumber < savedSamples.size())
        g.drawText(savedSamples[rowNumber].getFileName(), 4, 0, width - 8, height, Justification::centredLeft, true);
}

void SamplerComponent::listBoxItemClicked(int row, const MouseEvent&)
{
    if (row < savedSamples.size()) playSample(savedSamples[row]);
}

void SamplerComponent::playSample(File sampleFile)
{
    auto* reader = formatManager.createReaderFor(URL{sampleFile}.createInputStream(false));
    if (reader != nullptr)
    {
        unique_ptr<AudioFormatReaderSource> newSource(new AudioFormatReaderSource(reader, true));
        transportSource.setSource(newSource.get(), 0, nullptr, reader->sampleRate);
        readerSource.reset(newSource.release());
        transportSource.start();
    }
}

void SamplerComponent::prepareToPlay(int samplesPerBlockExpected, double sampleRate)
{
    currentSampleRate = sampleRate;
    
    // FIX 2: Pre-allocate the memory safely before the audio starts running
    recordBuffer.setSize(2, (int)currentSampleRate * 60);
    recordBuffer.clear();
    
    transportSource.prepareToPlay(samplesPerBlockExpected, sampleRate);
}

void SamplerComponent::getNextAudioBlock(const AudioSourceChannelInfo& bufferToFill)
{
    if (readerSource.get() != nullptr) transportSource.getNextAudioBlock(bufferToFill);
    else bufferToFill.clearActiveBufferRegion();
}

void SamplerComponent::releaseResources() { transportSource.releaseResources(); }

// ============== BUTTON CLICKS (R4A & R4C) ==============

void SamplerComponent::buttonClicked(Button* button)
{
    if (button == &recordMicButton)
    {
        if (!isRecordingMic) {
            startRecording();
            isRecordingMic = true;
            recordMicButton.setButtonText("RECORDING MIC... (Stop)");
            recordMicButton.setColour(TextButton::buttonColourId, Colours::red);
        } else {
            isRecordingMic = false;
            stopRecording("Mic");
            recordMicButton.setButtonText("RECORD MIC");
            recordMicButton.setColour(TextButton::buttonColourId, Colours::darkgrey);
        }
    }
    else if (button == &recordDeckButton)
    {
        if (!isRecordingDeck) {
            startRecording();
            isRecordingDeck = true;
            recordDeckButton.setButtonText("RECORDING DECK... (Stop)");
            recordDeckButton.setColour(TextButton::buttonColourId, Colours::red);
        } else {
            isRecordingDeck = false;
            stopRecording("Deck");
            recordDeckButton.setButtonText("RECORD DECK");
            recordDeckButton.setColour(TextButton::buttonColourId, Colours::darkgrey);
        }
    }
    else if (button == &deleteButton)
    {
        int row = sampleList.getSelectedRow();
        if (row >= 0 && row < savedSamples.size()) {
            savedSamples[row].deleteFile();
            loadSamplesFromDisk();
        }
    }
}

// ============== RECORDING LOGIC (R4A) ==============

void SamplerComponent::startRecording()
{
    // FIX 3: No longer resizing memory here, just resetting the counters
    recordBuffer.clear();
    nextRecordOffset = 0;
}

void SamplerComponent::stopRecording(String prefix)
{
    if (nextRecordOffset > 0)
    {
        File newFile = sampleFolder.getChildFile(prefix + "_Sample_" + String(Time::currentTimeMillis()) + ".wav");
        
        // FIX 4: Check if the file stream successfully opened before writing to avoid the jassert crash
        auto fileStream = make_unique<FileOutputStream>(newFile);
        
        if (fileStream->openedOk())
        {
            WavAudioFormat format;
            unique_ptr<AudioFormatWriter> writer(
                format.createWriterFor(fileStream.release(), currentSampleRate, recordBuffer.getNumChannels(), 16, {}, 0)
            );
            
            if (writer != nullptr) writer->writeFromAudioSampleBuffer(recordBuffer, 0, nextRecordOffset);
        }
        else
        {
            cout << "WARNING: Could not write file. Check macOS permissions for: " << newFile.getFullPathName() << endl;
        }
    }
    
    loadSamplesFromDisk();
}

void SamplerComponent::processMicInput(const AudioSourceChannelInfo& bufferToFill)
{
    if (!isRecordingMic) return;
    auto numSamples = bufferToFill.numSamples;
    if (nextRecordOffset + numSamples < recordBuffer.getNumSamples()) {
        for (int chan = 0; chan < jmin(bufferToFill.buffer->getNumChannels(), recordBuffer.getNumChannels()); ++chan)
            recordBuffer.copyFrom(chan, nextRecordOffset, *bufferToFill.buffer, chan, bufferToFill.startSample, numSamples);
        nextRecordOffset += numSamples;
    }
}

void SamplerComponent::processDeckOutput(const AudioSourceChannelInfo& bufferToFill)
{
    if (!isRecordingDeck) return;
    auto numSamples = bufferToFill.numSamples;
    if (nextRecordOffset + numSamples < recordBuffer.getNumSamples()) {
        for (int chan = 0; chan < jmin(bufferToFill.buffer->getNumChannels(), recordBuffer.getNumChannels()); ++chan)
            recordBuffer.copyFrom(chan, nextRecordOffset, *bufferToFill.buffer, chan, bufferToFill.startSample, numSamples);
        nextRecordOffset += numSamples;
    }
}
