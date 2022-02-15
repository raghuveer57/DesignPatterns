#pragma once
#include <iostream>
#include "editor.h"
#include <string>
#include "application.h"

using namespace std;
class Application;
// base abstract command class for all the concrete commands
class Command
{
protected:
    Application *application;
    Editor *editor;
    string backup;

public:
    explicit Command(Application *app, Editor *edtr);
    void saveBackup();
    

    void undo();
    
    // force concrete methods to provide implementations
    // returns true/false depending on editor status text changed or not
    virtual bool execute() = 0;
};
