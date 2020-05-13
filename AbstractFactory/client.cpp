
#include <iostream>
#include "UIElements.h"

using namespace std;

string config = "Windows"; // default

//Concrete UIElements interface implementing classes are instantiated based on the config string
UIElements *CreateUIElements()
{
    if (config == "Windows")
        return new WinUIElements();
    else if (config == "MacOS")
        return new MacUIElements();
    else
        return nullptr;
}

void Client(UIElements *creator)
{
    //Client does not know about creator class
    //Adding a new creator subclass does not effect the Client code
    creator->CreateUIElements();
    creator->DrawButton();
    creator->DrawSlider();
}

int main()
{
    // Default config is Windows.
    UIElements *UIElements = CreateUIElements(); // A windows button is created
    Client(UIElements);
    delete UIElements;

    config = "MacOS";                      // change the config to MacOS
    UIElements = CreateUIElements(); //A Mac button is created
    Client(UIElements);
    delete UIElements;
}
