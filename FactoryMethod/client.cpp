
#include <iostream>
#include "ButtonCreator.h"

using namespace std;

string config = "Windows"; // default

//Concrete Button Creator classes are instantiated based on the config string
ButtonCreator *CreateButtonCreator()
{
    if (config == "Windows")
        return new WinButtonCreator();
    else if (config == "MacOS")
        return new MacButtonCreator();
    else
        return nullptr;
}

void Client(ButtonCreator *creator)
{
    //Client does not know about creator class
    //Adding a new creator subclass does not effect the Client code
    creator->CreateButton();
    creator->DrawButton();
}

int main()
{
    // Default config is Windows.
    ButtonCreator *buttonCreator = CreateButtonCreator(); // A windows button is created
    Client(buttonCreator);
    delete buttonCreator;

    config = "MacOS";                      // change the config to MacOS
    buttonCreator = CreateButtonCreator(); //A Mac button is created
    Client(buttonCreator);
    delete buttonCreator;
}
