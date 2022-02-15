#include "command.h"

Command::Command(Application *app, Editor *edtr) : application(app), editor(edtr), backup("") {}

void Command::saveBackup()
{
    // current text is saved to backup
    backup = editor->getSelection();
}

void Command::undo()
{
    // text is restored from backup
    editor->replaceSelection(backup);
}