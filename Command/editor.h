#pragma once
#include <iostream>
#include <string>

using namespace std;

// Editor class has actual texting operations
// It plays the role of the receiver
// All commands delegate execution to the editor's methods
class Editor
{
private:
    string text;

public:
    // selection text for each editor is intialized via constructor
    Editor(string selection) : text(selection) {}

    // the entire text is considered as selection for making things simpler
    string getSelection()
    {
        return text;
    }

    void deleteSelection()
    {
        text = "";
    }

    void replaceSelection(string selection)
    {
        text = selection;
    }
};
