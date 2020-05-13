#pragma once

#include <iostream>
#include "Button.h"

using namespace std;

// This consists of factor interface class and concrete factories implementing the factory interface.
// Abstract class for Buttons.
class ButtonCreator
{
protected:
    Button *button;

public:
    virtual void CreateButton() = 0; //  pure virtual functions to make this class abstract(interface)
    virtual void DrawButton()
    {
        if (button)
            button->DrawButton();
    }
    virtual ~ButtonCreator()
    {
        if (button)
        {
            delete button;
        }
    }
};

// A concrete class that implements the button in windows platform.
class WinButtonCreator : public ButtonCreator
{
public:
    virtual void CreateButton()
    {
        button = new WinButton();
    }
    virtual ~WinButtonCreator()
    {
        cout << "Windows Button creator destructor" << endl;
    }
};

// A concrete class that implements the button in macOS platform.
class MacButtonCreator : public ButtonCreator
{
public:
    virtual void CreateButton()
    {
        button = new MacButton();
    }
    virtual ~MacButtonCreator()
    {
        cout << "MacOS Button creator destructor" << endl;
    }
};