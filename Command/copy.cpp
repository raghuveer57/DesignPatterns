#include "copy.h"

Copy::Copy(Application* application, Editor* editor) : Command(application,editor) { }

bool Copy::execute()
{
    cout << "Copying " << editor->getSelection() << endl;
    application->clipboard = editor->getSelection();
    return false;
}

