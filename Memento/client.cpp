#include <iostream>
#include "command.h"
using namespace std;

int main()
{
   auto editor = new Editor("First", 0 ,0, 10);
   editor->displayEditor();
   auto command = new Command(editor);
   // save the current state of editor
   command->takeBackup();
   //update the editor data
   editor->setText("Second");
   editor->setCursor(1,1);
   editor->setSelectionWidth(20);
   editor->displayEditor();
   //undo the sate 
   command->undo();
   editor->displayEditor(); // this displays the last saved editor state
   return 0;
}