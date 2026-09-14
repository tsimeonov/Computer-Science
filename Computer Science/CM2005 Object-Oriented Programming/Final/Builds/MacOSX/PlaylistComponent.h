//
//  PlaylistComponent.h
//  OtoDecks - App
//
//  Created by Todor simeonov on 11/09/2026.
//

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include <vector>
#include <fstream>
#include "DeckGUI.h"
#include "DJAudioPlayer.h"

class PlaylistComponent  : public Component,
                           public TableListBoxModel,
                           public Button::Listener
{
public:
    // We pass pointers to our DJAudioPlayers and WaveformDisplays so we can load tracks into them (R2B)
    PlaylistComponent(DeckGUI* _deckGUI1, DeckGUI* _deckGUI2,
                      DJAudioPlayer* _player1, DJAudioPlayer* _player2);
    ~PlaylistComponent() override;

    void paint (Graphics&) override;
    void resized() override;

    // TableListBoxModel implementation requirements
    int getNumRows() override;
    void paintRowBackground (Graphics&, int rowNumber, int width, int height, bool rowIsSelected) override;
    void paintCell (Graphics&, int rowNumber, int columnId, int width, int height, bool rowIsSelected) override;
    
    // Used to embed "Load D1" and "Load D2" buttons in the table
    Component* refreshComponentForCell (int rowNumber, int columnId, bool isRowSelected, Component* existingComponentToUpdate) override;

    void buttonClicked(Button* button) override;

private:
    TableListBox tableComponent;
    std::vector<File> trackFiles;
    
    TextButton importButton{"IMPORT TRACKS"};
    
    DeckGUI* deckGUI1;
    DeckGUI* deckGUI2;
    DJAudioPlayer* player1;
    DJAudioPlayer* player2;

    juce::FileChooser fChooser{"Select audio files to add to library..."};

    // Helper functions for R2C: Persistence
    void saveLibrary();
    void loadLibrary();
    String getLengthInMinutesAndSeconds(File file);

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PlaylistComponent)
};
