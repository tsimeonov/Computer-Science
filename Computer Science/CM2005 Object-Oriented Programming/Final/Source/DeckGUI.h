/*
  ==============================================================================

    DeckGUI.h
    Created: 13 Mar 2020 6:44:48pm
    Author:  matthew
 
    Updated: 11/09/26
    Author: T.Simeonov

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "DJAudioPlayer.h"
#include "WaveformDisplay.h"

//==============================================================================
/*
*/
class DeckGUI    : public Component,
                   public Button::Listener, 
                   public Slider::Listener, 
                   public FileDragAndDropTarget, 
                   public Timer
{
public:
    DeckGUI(DJAudioPlayer* player, 
           AudioFormatManager & 	formatManagerToUse,
           AudioThumbnailCache & 	cacheToUse );
    ~DeckGUI();

    void paint (Graphics&) override;
    void resized() override;

     /** implement Button::Listener */
    void buttonClicked (Button *) override;

    /** implement Slider::Listener */
    void sliderValueChanged (Slider *slider) override;

    bool isInterestedInFileDrag (const StringArray &files) override;
    void filesDropped (const StringArray &files, int x, int y) override;
    
    void loadFile(URL audioURL) {
        player->loadURL(audioURL);
        waveformDisplay.loadURL(audioURL);
        currentTrackName = audioURL.getFileName();
        loadCues(); // Load persisted cues for this specific track (R3D)
        }

    void timerCallback() override;

private:
    juce::FileChooser fChooser{"Select a file..."};

    TextButton playButton{"PLAY"};
    TextButton stopButton{"STOP"};
    TextButton loadButton{"LOAD"};
  
    Slider volSlider; 
    Slider speedSlider;
    Slider posSlider;

    WaveformDisplay waveformDisplay;
    
    DJAudioPlayer* player;
    // R3: Hot Cues
    TextButton cueButtons[8];
    TextButton clearCuesButton{"CLEAR CUES"};
    double cuePositions[8];
    String currentTrackName;

    // Helper functions for R3D: Persistence
    void saveCues();
    void loadCues();
    
    // R5: BPM Visualisation
    Label bpmLabel;
    double baseBPM{120.0}; // A default assumption for the track's original tempo

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (DeckGUI)
};
