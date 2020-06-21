
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

// Client method that uses the
void Client(UIElements *creator)
{
    //Client does not know about creator class
    //Adding a new creator subclass does not effect the Client code
    Button *button = creator->CreateButton();
    Slider *slider = creator->CreateSlider(button);
    button->DrawButton();
    slider->DrawSlider();
    delete slider;
    delete button;
}

int main()
{
    // Default config is Windows.
    UIElements *UIElements = CreateUIElements(); // windows UIElements are created
    Client(UIElements);
    delete UIElements;

    config = "MacOS";                // change the config to MacOS
    UIElements = CreateUIElements(); //Mac UIElements are created
    Client(UIElements);
    delete UIElements;
}
