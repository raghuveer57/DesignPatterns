#pragma once
#include "component.h"

class Component;
//Mediator interface
class Mediator
{
    public:
    virtual void notify(std::shared_ptr<Component> sender, std::string event) = 0;
};