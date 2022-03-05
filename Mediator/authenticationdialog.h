#pragma once
#include <iostream>
#include "mediator.h"
#include "concretecomponents.h"

// Mediator interface
class AuthenticationDialog : public Mediator
{
private:
    shared_ptr<Component> title;       // default title is login
    shared_ptr<Component> infoButton;   // can be login or rgister, default = login
    shared_ptr<Component> isRegister; // by default
public:
    AuthenticationDialog() : title(nullptr), infoButton(nullptr), isRegister(nullptr) {}

    void SetTitle(shared_ptr<Component> titleptr)
    {
        title = titleptr;
    }

    void SetCheckBox(shared_ptr<Component> isRegisterPtr)
    {
        isRegister = isRegisterPtr;
    }

    void SetButton(shared_ptr<Component> infoButtonPtr)
    {
        infoButton = infoButtonPtr;
    }

    void notify(shared_ptr<Component> sender, string event)
    {
        //TODO: currently wrote a dummy logic to test if the senders
        // and events are working as expected
        if(sender->text == title->text)
            cout << event << " on " << title->text << endl;
        if(sender->text == infoButton->text)
            cout << event << " on " << infoButton->text << endl;
        if(sender->text == isRegister->text)
            cout << event << " on " << isRegister->text << endl;
    }
};