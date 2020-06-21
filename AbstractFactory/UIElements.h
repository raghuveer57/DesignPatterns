#pragma once

#include <iostream>
#include "Button.h"
#include "Slider.h"

using namespace std;

// This consists of abstract factory interface class and concrete factories implementing the factory interface.
// Abstract class for UIElements.
class UIElements
{
public:
    virtual Button *CreateButton() = 0;
    virtual Slider *CreateSlider(Button *button) = 0;
    virtual ~UIElements() {}
};

// A concrete class that implements the creation of button and slider in windows platform.
class WinUIElements : public UIElements
{
public:
    virtual Button *CreateButton() //Creates a new windows button
    {
        return new WinButton();
    }
    virtual Slider *CreateSlider(Button *button) //Creates a new windows slider
    {
        return new WinSlider(button);
    }
};

// A concrete class that implements the creation of button and slider in macOS platform.
class MacUIElements : public UIElements
{
public:
    virtual Button *CreateButton() //Creates a new MAC button
    {
        return new MacButton();
    }
    virtual Slider *CreateSlider(Button *button) //Creates a new MAC slider
    {
        return new MacSlider(button);
    }
};