#include "cut.h"

bool Cut::execute()
{
    saveBackup();
    cout << "Cutting " << editor->getSelection() << endl;
    application->clipboard = editor->getSelection();
    editor->deleteSelection();
    return true;
}