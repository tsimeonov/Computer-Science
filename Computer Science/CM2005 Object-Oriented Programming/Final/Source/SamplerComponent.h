/*
  ==============================================================================

    SamplerComponent.h
    Created: 11 Sep 2026 4:07:55pm
    Author:  Todor simeonov

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include <vector>

class SamplerComponent : public Component,
                       public ListBoxModel,
                       public Button::Listener,
                       public AudioSource
{
public:
    SamplerComponent(AudioFormatManager& _formatManager);
    ~SamplerComponent() override;

    void paint (Graphics&) override;
    void resized() override;

    int getNumRows() override;
    void paintListBoxItem (int rowNumber, Graphics& g, int width, int height, bool rowIsSelected) override;
    void listBoxItemClicked (int row, const MouseEvent&) override;
    void buttonClicked (Button* button) override;

    void prepareToPlay (int samplesPerBlockExpected, double sampleRate) override;
    void getNextAudioBlock (const AudioSourceChannelInfo& bufferToFill) override;
    void releaseResources() override;

    // --- NEW: Audio capturing functions (R4A) ---
    void processMicInput(const AudioSourceChannelInfo& bufferToFill);
    void processDeckOutput(const AudioSourceChannelInfo& bufferToFill);

private:
    AudioFormatManager& formatManager;
    std::unique_ptr<AudioFormatReaderSource> readerSource;
    AudioTransportSource transportSource;

    ListBox sampleList;
    std::vector<File> savedSamples;
    
    TextButton recordMicButton{"RECORD MIC"};
    TextButton recordDeckButton{"RECORD DECK"};
    TextButton deleteButton{"DELETE SELECTED"}; // (R4C)
    
    File sampleFolder;

    // --- NEW: Recording State ---
    bool isRecordingMic{false};
    bool isRecordingDeck{false};
    AudioBuffer<float> recordBuffer;
    int nextRecordOffset{0};
    double currentSampleRate{44100.0};

    void loadSamplesFromDisk();
    void playSample(File sampleFile);
    
    void startRecording();
    void stopRecording(String prefix);

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SamplerComponent)
};
