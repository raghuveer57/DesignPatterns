#include "application.h"
#include "copy.h"
#include "cut.h"
#include "paste.h"
#include "undo.h"

void Application::executeCommand(Command *command)
{
    if (command->execute())
        commandHistory.push(command);
}

void Application::executeCopy()
{
    Copy *copy = new Copy(this, activeEditor);
    executeCommand(copy);
}

void Application::executeCut()
{
    Cut* cut = new Cut(this,activeEditor);
    executeCommand(cut);
}

void Application::executePaste()
{
    Paste* paste = new Paste(this,activeEditor);
    executeCommand(paste);
}

void Application::executeUndo()
{
    Undo* undo = new Undo(this,activeEditor);
    executeCommand(undo);
}

void Application:: undo()
{
    Command* command = commandHistory.pop();
    if (command != nullptr)
        command->undo();
}

void Application::render()
{
    cout << "Clipboard content: " << clipboard << endl;
    cout << "Editor Text: " << activeEditor->getSelection() << endl;
    cout << "Command History: " << commandHistory.size() << endl;
    cout << endl;
}

void Application::setActiveEditor(Editor* editor)
{
    activeEditor = editor;
}