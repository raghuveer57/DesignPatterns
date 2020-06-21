#pragma once

#include <iostream>
#include "Button.h"

using namespace std;

// This consists of product interface class and concrete products implementing the product interface.
// Abstract class for Sliders.
class Slider
{
protected:
    Button *button; // we keep a reference of a button since a button is required to create the slider

public:
    Slider(Button *btn) // Slider is created using buttons
    {
        button = btn;
    }
    virtual void DrawSlider() = 0; // a pure virtual function to make this class abstract(interface)
    virtual ~Slider() {}
};

// A concrete class that implements the slider in windows platform.
class WinSlider : public Slider
{
public:
    explicit WinSlider(Button *btn) : Slider(btn) {}
    void DrawSlider()
    {
        cout << "Creating a Slider with ";
        button->DrawButton();
    }
};

// A concrete class that implements the slider in macOS platform.
class MacSlider : public Slider
{
public:
    explicit MacSlider(Button *btn) : Slider(btn) {}
    void DrawSlider()
    {
        cout << "Creating a Slider with ";
        button->DrawButton();
    }
};