/*
  ==============================================================================

    DeckGUI.cpp
    Created: 13 Mar 2020 6:44:48pm
    Author:  matthew
 
    Updated: 11/09/26
    Author: T.Simeonov

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "DeckGUI.h"
#include <fstream>

using namespace std;

//==============================================================================
DeckGUI::DeckGUI(DJAudioPlayer* _player, 
                AudioFormatManager & 	formatManagerToUse,
                AudioThumbnailCache & 	cacheToUse
           ) : player(_player), 
               waveformDisplay(formatManagerToUse, cacheToUse)
{

    addAndMakeVisible(playButton);
    addAndMakeVisible(stopButton);
    addAndMakeVisible(loadButton);
       
    addAndMakeVisible(volSlider);
    addAndMakeVisible(speedSlider);
    addAndMakeVisible(posSlider);

    addAndMakeVisible(waveformDisplay);


    playButton.addListener(this);
    stopButton.addListener(this);
    loadButton.addListener(this);

    volSlider.addListener(this);
    speedSlider.addListener(this);
    posSlider.addListener(this);


    volSlider.setRange(0.0, 1.0);
    speedSlider.setRange(0.1, 5.0);
    speedSlider.setValue(1.0);
    
    posSlider.setRange(0.0, 1.0);

    startTimer(500);
    
    addAndMakeVisible(clearCuesButton);
    clearCuesButton.addListener(this);
    
    for (int i = 0; i < 8; ++i)
        {
            cueButtons[i].setButtonText("CUE " + String(i + 1));
            addAndMakeVisible(cueButtons[i]);
            cueButtons[i].addListener(this);
            cuePositions[i] = -1.0;
            cueButtons[i].setColour(TextButton::buttonColourId, Colours::darkgrey);
        }
    
    addAndMakeVisible(bpmLabel);
        bpmLabel.setText("BPM: --", dontSendNotification);
        bpmLabel.setJustificationType(Justification::centred);
        bpmLabel.setColour(Label::backgroundColourId, Colours::black);
        bpmLabel.setColour(Label::textColourId, Colours::orange);


}

DeckGUI::~DeckGUI()
{
    stopTimer();
}

void DeckGUI::paint (Graphics& g)
{
    /* This demo code just fills the component's background and
       draws some placeholder text to get you started.

       You should replace everything in this method with your own
       drawing code..
    */

    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));   // clear the background

    g.setColour (Colours::grey);
    g.drawRect (getLocalBounds(), 1);   // draw an outline around the component

    g.setColour (Colours::white);
    g.setFont (14.0f);
    g.drawText ("DeckGUI", getLocalBounds(),
                Justification::centred, true);   // draw some placeholder text
}

void DeckGUI::resized()
{
    double rowH = getHeight() / 10; // Split into 10 sections now
        
    playButton.setBounds(0, 0, getWidth(), rowH);
    stopButton.setBounds(0, rowH, getWidth(), rowH);
    volSlider.setBounds(0, rowH * 2, getWidth(), rowH);
    speedSlider.setBounds(0, rowH * 3, getWidth() * 0.75, rowH);
    bpmLabel.setBounds(getWidth() * 0.75, rowH * 3, getWidth() * 0.25, rowH);
    posSlider.setBounds(0, rowH * 4, getWidth(), rowH);
    waveformDisplay.setBounds(0, rowH * 5, getWidth(), rowH * 2);
        
    // R3: Layout for 8 cue buttons (2 rows of 4)
    double colW = getWidth() / 4;
    for (int i = 0; i < 4; ++i) {
        cueButtons[i].setBounds(i * colW, rowH * 7, colW, rowH);
        cueButtons[i + 4].setBounds(i * colW, rowH * 8, colW, rowH);
    }
        
    // Bottom row split between Load and Clear Cues
    loadButton.setBounds(0, rowH * 9, getWidth() / 2, rowH);
    clearCuesButton.setBounds(getWidth() / 2, rowH * 9, getWidth() / 2, rowH);
}

void DeckGUI::buttonClicked(Button* button)
{
    if (button == &playButton)
    {
        cout << "Play button was clicked " << endl;
        player->start();
    }
     if (button == &stopButton)
    {
        cout << "Stop button was clicked " << endl;
        player->stop();

    }
    if (button == &loadButton)
        {
           auto fileChooserFlags = FileBrowserComponent::canSelectFiles;
           fChooser.launchAsync(fileChooserFlags, [this](const FileChooser& chooser)
           {
               File chosenFile = chooser.getResult();
               if (chosenFile.exists()){
                   // CHANGE THESE LINES to use our custom method!
                   loadFile(URL{chosenFile});
               }
           });
        }
    // R3C: Clear all hot cues
        if (button == &clearCuesButton)
        {
            for (int i = 0; i < 8; ++i) {
                cuePositions[i] = -1.0;
                cueButtons[i].setColour(TextButton::buttonColourId, Colours::darkgrey);
            }
            saveCues();
        }

        // R3A & R3B: Hot Cue interaction
        for (int i = 0; i < 8; ++i)
        {
            if (button == &cueButtons[i])
            {
                if (ModifierKeys::getCurrentModifiers().isShiftDown())
                {
                    // Shift+Click: Clear individual cue (R3B)
                    cuePositions[i] = -1.0;
                    cueButtons[i].setColour(TextButton::buttonColourId, Colours::darkgrey);
                }
                else if (cuePositions[i] == -1.0)
                {
                    // Regular Click on empty: Assign cue (R3A)
                    cuePositions[i] = player->getPositionRelative();
                    cueButtons[i].setColour(TextButton::buttonColourId, Colours::orange);
                }
                else
                {
                    // Regular Click on filled: Jump to cue (R3A)
                    player->setPositionRelative(cuePositions[i]);
                }
                saveCues(); // Save state changes
            }
        }
}

void DeckGUI::sliderValueChanged (Slider *slider)
{
    if (slider == &volSlider)
    {
        player->setGain(slider->getValue());
    }

    if (slider == &speedSlider)
    {
        double speedRatio = slider->getValue();
                player->setSpeed(speedRatio);
                
                // R5D: Update Visual BPM based on playback speed
                double currentBPM = baseBPM * speedRatio;
                bpmLabel.setText("BPM: " + String(currentBPM, 1), dontSendNotification);
    }
    
    if (slider == &posSlider)
    {
        player->setPositionRelative(slider->getValue());
    }
    
}

bool DeckGUI::isInterestedInFileDrag (const StringArray &files)
{
  cout << "DeckGUI::isInterestedInFileDrag" << endl;
  return true; 
}

void DeckGUI::filesDropped (const StringArray &files, int x, int y)
{
    cout << "DeckGUI::filesDropped" << endl;
      if (files.size() == 1)
      {
        loadFile(URL{File{files[0]}});
      }
}

void DeckGUI::timerCallback()
{
    waveformDisplay.setPositionRelative(
            player->getPositionRelative());
}


void DeckGUI::saveCues()
{
    if (currentTrackName.isEmpty()) return;
    
    File cueFile = File::getCurrentWorkingDirectory().getChildFile(currentTrackName + ".cues");
    ofstream out(cueFile.getFullPathName().toStdString());
    
    for (int i = 0; i < 8; ++i) {
        out << cuePositions[i] << endl;
    }
}

void DeckGUI::loadCues()
{
    // Reset GUI first
    for (int i = 0; i < 8; ++i) {
        cuePositions[i] = -1.0;
        cueButtons[i].setColour(TextButton::buttonColourId, Colours::darkgrey);
    }
    
    if (currentTrackName.isEmpty()) return;
    
    File cueFile = File::getCurrentWorkingDirectory().getChildFile(currentTrackName + ".cues");
    if (cueFile.existsAsFile())
    {
        ifstream in(cueFile.getFullPathName().toStdString());
        string line;
        int i = 0;
        
        while (getline(in, line) && i < 8)
        {
            cuePositions[i] = stod(line);
            if (cuePositions[i] != -1.0) {
                cueButtons[i].setColour(TextButton::buttonColourId, Colours::orange);
            }
            i++;
        }
    }
}


