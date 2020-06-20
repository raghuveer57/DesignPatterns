#pragma once

#include <iostream>

using namespace std;

// This file consists of product(i.e. Button) interface class and concrete products implementing the product interface.
// Abstract class for Buttons.
// Any button that you want to add must be derived from this and the pure virtual function DrawButton()
// must be overridden in the derived class
class Button
{
public:
    virtual void DrawButton() = 0; // a pure virtual function to make this class abstract(interface)
    virtual ~Button() {}
};

// A concrete class that implements the product interface(i.e the button interface) in the Windows platform.
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

// A concrete class that implements the product interface(i.e the button interface) in the MacOS platform.
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