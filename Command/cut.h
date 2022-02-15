#pragma once
#include <iostream>
#include "editor.h"
#include <string>
#include "command.h"
#include "application.h"

using namespace std;
// Concrete copy command class
class Cut: public Command
{
      public:
      Cut(Application* application, Editor* editor) : Command(application,editor) { }
      bool execute();
      
};
