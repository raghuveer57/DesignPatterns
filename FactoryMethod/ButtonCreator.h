#pragma once

#include <iostream>
#include "Button.h"

using namespace std;

// This file consists of factory(creator) interface class and all the concrete factory classes implementing the factory interface.
// Abstract class for Buttons.
class ButtonCreator
{
public:
    //This is the creator method that needs to be implemented by the concrete classes.
    virtual Button *CreateButton() = 0;
    virtual ~ButtonCreator(){}
};

// A concrete class that implements the button in windows platform.
class WinButtonCreator : public ButtonCreator
{
public:
    virtual Button *CreateButton()
    {
        // A windows button is created
        // Button should be deleted after the usage
        return new WinButton();
    }
    virtual ~WinButtonCreator()
    {
        cout << "Deleting the windows button creator instance" << endl;
    }
};

// A concrete class that implements the button in macOS platform.
class MacButtonCreator : public ButtonCreator
{
public:
    virtual Button *CreateButton()
    {
        // A windows button is created
        // Button should be deleted after the usage
        return new MacButton();
    }
    virtual ~MacButtonCreator()
    {
        cout << "Deleting the Mac button creator instance" << endl;
    }
};