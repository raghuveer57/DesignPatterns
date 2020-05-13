#pragma once

#include <iostream>
#include "Button.h"
#include "Slider.h"

using namespace std;

// This consists of abstract factory interface class and concrete factories implementing the factory interface.
// Abstract class for UIElements.
class UIElements
{
protected:
    Button *button;
    Slider *slider;

public:
    virtual void CreateUIElements() = 0; //  pure virtual function to make this class abstract(interface)
    virtual void DrawButton()
    {
        if (button)
            button->DrawButton();
    }
    virtual void DrawSlider()
    {
        if (slider)
            slider->DrawSlider();
    }
    virtual ~UIElements()
    {
        if (button)
            delete button;
        if(slider)
            delete slider;
    }
};

// A concrete class that implements the UIElements in windows platform.
class WinUIElements : public UIElements
{
public:
    virtual void CreateUIElements()
    {
        button = new WinButton();
        slider = new WinSlider(button);
    }
    virtual ~WinUIElements()
    {
        cout << "Windows UIElements destructor" << endl;
    }
};

// A concrete class that implements the button in macOS platform.
class MacUIElements : public UIElements
{
public:
    virtual void CreateUIElements()
    {
        button = new MacButton();
        slider = new MacSlider(button);
    }
    virtual ~MacUIElements()
    {
        cout << "MacOS UIElements destructor" << endl;
    }
};