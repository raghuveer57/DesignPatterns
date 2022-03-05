#pragma once
#include "component.h"

// concrete component class
class Button : public Component
{
public:
    explicit Button(shared_ptr<Mediator> diaglog_ptr, string name) : Component(diaglog_ptr, name) {}
};

// concrete component class
class TextBox : public Component
{
public:
    explicit TextBox(shared_ptr<Mediator> diaglog_ptr, string name) : Component(diaglog_ptr, name) {}
};

// concrete component class
class CheckBox : public Component
{
public:
    bool isCheck;
    explicit CheckBox(shared_ptr<Mediator> diaglog_ptr, string name) : Component(diaglog_ptr, name), isCheck(false) {}
    void check()
    {
        dialog->notify(make_shared<Component>(*this), "OnCheck");
    }
};