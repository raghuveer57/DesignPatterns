#pragma once
#include <iostream>
#include "editor.h"

class Command
{
private:
    Editor::SnapShot* backup;
    Editor *editor;

public:
    // dummy command construction using editor pointer
    Command(Editor *edtr) : editor(edtr), backup(nullptr) {}
    void takeBackup()
    {
        backup = editor->createSnapshot();
    }
    void undo()
    {
        if(backup)
            backup->restore();
    }
};