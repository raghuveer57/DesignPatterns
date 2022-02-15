#include <iostream>
#include "command.h"
#include "editor.h"
#include "application.h"


using namespace std;

int main()
{
    Application* app = new Application();
    Editor* editor1 = new Editor("Editor 1 text");
    Editor* editor2 = new Editor("Editor 2 text");
    app->setActiveEditor(editor1);
    app->render();
    //Copy Commmand 
    app->executeCopy();
    app->render();
    app->setActiveEditor(editor2);
    //Cut command
    app->executeCut();
    app->render();
      //paste command
    app->setActiveEditor(editor1);
    app->render();
    app->executePaste();
    app->render();

    // undo command
    app->executeUndo();
    app->render();
    
    return 0;
}
