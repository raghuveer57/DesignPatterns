#pragma once

#include <iostream>

using namespace std;

// This consists of product interface class and concrete products implementing the product interface.
// Abstract class for Buttons.
class Button
{
public:
    virtual void DrawButton() = 0; // a pure virtual function to make this class abstract(interface)
    virtual ~Button() {}
};

// A concrete class that implements the button in windows platform.
class WinButton : public Button
{
public:
    void DrawButton()
    {
        cout << "Windows Button -> Draw() call" << endl;
    }
    virtual ~WinButton()
    {
        cout << "Deleting the actual windows button" << endl;
    }
};

// A concrete class that implements the button in macOS platform.
class MacButton : public Button
{
public:
    void DrawButton()
    {
        cout << "MacOS Button -> Draw() call" << endl;
    }
    virtual ~MacButton()
    {
        cout << "Deleting the actual MacOS button" << endl;
    }
};