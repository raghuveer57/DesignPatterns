#pragma once
#include <iostream>
#include "editor.h"
#include <string>
#include "command.h"
#include "application.h"

using namespace std;
// Concrete undo command class
class Undo : public Command
{
public:
      Undo(Application *application, Editor *editor) : Command(application, editor) {}

      bool execute()
      {
            cout << "Undoing the operation" << endl;
            application->undo();
            return false;
      }
};
