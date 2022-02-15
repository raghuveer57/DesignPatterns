#pragma once
#include <iostream>
#include <string>
#include "editor.h"

#include <vector>
#include <stack>
#include "commandhistory.h"

// Editor class has actual texting operations
// It plays the role of the receiver
// All commands delegate executiion to the editor's methods
class Application
{
public:
    Application() {}
    string clipboard;
    Editor *activeEditor;
    // application keeps track of the current command
    CommandHistory commandHistory;

    void executeCommand(Command *command);
    void executeCopy();
    void executeCut();
    void executePaste();
    // helper function to display the current status of editor/application
    void executeUndo();
    void render();
    void setActiveEditor(Editor *editor);
    void undo();
};