#pragma once
#include "mediator.h"
#include <memory>
#include <string>
using namespace std;

class Component
{
protected:
    shared_ptr<Mediator> dialog;
    //usually has labels and rendering functions
    
public:
    string text;
    explicit Component(shared_ptr<Mediator> diaglog_ptr, string name) : dialog(diaglog_ptr), text(name) {}
    void click()
    {
        dialog->notify(make_shared<Component>(*this),"OnClick");
    }
    void keyPress()
    {
        dialog->notify(make_shared<Component>(*this),"OnKeyPress");
    }
};