//
//  PlaylistComponent.cpp
//  OtoDecks - App
//
//  Created by Todor simeonov on 11/09/2026.
//

#include "PlaylistComponent.h"

PlaylistComponent::PlaylistComponent(DeckGUI* _deckGUI1, DeckGUI* _deckGUI2,
                                     DJAudioPlayer* _player1, DJAudioPlayer* _player2)
    : deckGUI1(_deckGUI1), deckGUI2(_deckGUI2), player1(_player1), player2(_player2)
{
    // Setup Table headers (R2A)
    tableComponent.getHeader().addColumn("Track Title", 1, 300);
    tableComponent.getHeader().addColumn("Duration", 2, 100);
    tableComponent.getHeader().addColumn("", 3, 100); // Load to Deck 1 button
    tableComponent.getHeader().addColumn("", 4, 100); // Load to Deck 2 button
    
    tableComponent.setModel(this);
    addAndMakeVisible(tableComponent);
    
    addAndMakeVisible(importButton);
    importButton.addListener(this);

    // Load persisted data (R2C)
    loadLibrary();
}

PlaylistComponent::~PlaylistComponent()
{
    // Save state on application exit (R2C)
    saveLibrary();
}

void PlaylistComponent::paint(Graphics& g)
{
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));
}

void PlaylistComponent::resized()
{
    importButton.setBounds(0, 0, getWidth(), 40);
    tableComponent.setBounds(0, 40, getWidth(), getHeight() - 40);
}

void PlaylistComponent::buttonClicked(Button* button)
{
    if (button == &importButton)
    {
        // Allow multiple file selection (R2A)
        auto fileChooserFlags = FileBrowserComponent::canSelectMultipleItems | FileBrowserComponent::canSelectFiles;
        fChooser.launchAsync(fileChooserFlags, [this](const FileChooser& chooser)
        {
            Array<File> chosenFiles = chooser.getResults();
            for (File f : chosenFiles)
            {
                if (f.existsAsFile())
                    trackFiles.push_back(f);
            }
            tableComponent.updateContent(); // Refresh the table
            saveLibrary(); // Save updated list
        });
    }
}

// ============== PERSISTENCE (R2C) =================

void PlaylistComponent::saveLibrary()
{
    // Write track file paths to a local file
    std::ofstream myFile("playlistData.txt");
    for (File& f : trackFiles)
    {
        myFile << f.getFullPathName().toStdString() << std::endl;
    }
    myFile.close();
}

void PlaylistComponent::loadLibrary()
{
    // Read tracks back in when reopening
    std::ifstream myFile("playlistData.txt");
    std::string filePath;
    if (myFile.is_open())
    {
        while (getline(myFile, filePath))
        {
            File f{filePath};
            if (f.exists())
            {
                trackFiles.push_back(f);
            }
        }
        myFile.close();
    }
    tableComponent.updateContent();
}

int PlaylistComponent::getNumRows()
{
    return trackFiles.size();
}

void PlaylistComponent::paintRowBackground (Graphics& g, int rowNumber, int width, int height, bool rowIsSelected)
{
    if (rowIsSelected)
    {
        g.fillAll(Colours::orange);
    }
    else
    {
        g.fillAll(rowNumber % 2 == 0 ? Colours::darkgrey : Colours::black);
    }
}

void PlaylistComponent::paintCell (Graphics& g, int rowNumber, int columnId, int width, int height, bool rowIsSelected)
{
    g.setColour(Colours::white);
    g.setFont(14.0f);
    
    if (rowNumber < trackFiles.size())
    {
        if (columnId == 1)
        {
            // Display filename (R2A)
            g.drawText(trackFiles[rowNumber].getFileNameWithoutExtension(),
                       2, 0, width - 4, height, Justification::centredLeft, true);
        }
        else if (columnId == 2)
        {
            // Display duration (R2A)
            String duration = getLengthInMinutesAndSeconds(trackFiles[rowNumber]);
            g.drawText(duration, 2, 0, width - 4, height, Justification::centred, true);
        }
    }
}

Component* PlaylistComponent::refreshComponentForCell (int rowNumber, int columnId, bool isRowSelected, Component* existingComponentToUpdate)
{
    // Generate 'Load' buttons for columns 3 and 4 (R2B)
    if (columnId == 3 || columnId == 4)
    {
        TextButton* btn = static_cast<TextButton*>(existingComponentToUpdate);
        
        if (btn == nullptr)
        {
            btn = new TextButton(columnId == 3 ? "Load D1" : "Load D2");
        }
        
        // Capture the row and column in a lambda to handle the track loading
        btn->onClick = [this, rowNumber, columnId]()
        {
            URL audioURL = URL{trackFiles[rowNumber]};
            
            if (columnId == 3)
            {
                player1->loadURL(audioURL);
                // deckGUI1->loadFile(audioURL); // We need to add this method to DeckGUI!
            }
            else if (columnId == 4)
            {
                player2->loadURL(audioURL);
                // deckGUI2->loadFile(audioURL); // We need to add this method to DeckGUI!
            }
        };
        
        return btn;
    }
    
    return nullptr;
}

// ============== HELPER METHODS =================

String PlaylistComponent::getLengthInMinutesAndSeconds(File file)
{
    // Temporarily create a reader to grab the file length
    AudioFormatManager formatManager;
    formatManager.registerBasicFormats();
    
    std::unique_ptr<AudioFormatReader> reader(formatManager.createReaderFor(file));
    if (reader != nullptr)
    {
        double duration = reader->lengthInSamples / reader->sampleRate;
        int minutes = floor(duration / 60);
        int seconds = round(duration - (minutes * 60));
        
        String secStr = seconds < 10 ? "0" + String(seconds) : String(seconds);
        return String(minutes) + ":" + secStr;
    }
    return "0:00";
}
