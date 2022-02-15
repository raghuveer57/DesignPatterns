#pragma once
#include <iostream>
#include "editor.h"
#include <string>
#include "command.h"
#include "application.h"

using namespace std;
// Concrete copy command class
class Copy: public Command
{
      public:
      Copy(Application* application, Editor* editor);
      bool execute(); 
};
