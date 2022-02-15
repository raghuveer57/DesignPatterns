#pragma once
#include <iostream>
#include "editor.h"
#include <string>
#include "command.h"
#include "application.h"

using namespace std;
// Concrete copy command class
class Paste : public Command
{
public:
      Paste(Application *application, Editor *editor) : Command(application, editor) {}

      bool execute()
      {
            saveBackup();
            cout << "Pasting in to " << editor->getSelection() << endl;
            editor->replaceSelection (application->clipboard);
            return true;
      }
};
