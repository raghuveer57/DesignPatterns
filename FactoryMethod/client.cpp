
#include <iostream>
#include "ButtonCreator.h"

using namespace std;

string config = "Windows"; // default

//Concrete Button Creator classes are instantiated based on the config string
//Helper function for button creator
ButtonCreator *CreateButtonCreator()
{
    if (config == "Windows")
        return new WinButtonCreator();
    else if (config == "MacOS")
        return new MacButtonCreator();
    else
        return nullptr;
}

int main()
{
    // Default config is Windows.
    ButtonCreator *buttonCreator = CreateButtonCreator(); // Windows button creater instance is initialized
    Button *button = buttonCreator->CreateButton();       // A windows button is created
    delete buttonCreator;                                 //delete the creator class
    button->DrawButton();                                 // call the draw method on windows button
    delete button;

    config = "MacOS";                       // change the config to MacOS
    buttonCreator = CreateButtonCreator();  //Mac button creator instance is intialized
    button = buttonCreator->CreateButton(); // A mac button is created
    delete buttonCreator;                   //delete the creator class
    button->DrawButton();                   // call the draw method on mac button
    delete button;
}
