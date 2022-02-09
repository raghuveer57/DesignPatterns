#pragma once
#include <iostream>

#include <vector>
#include "component.h"

using namespace std;

// Abstract Container class which will have the method to
// add child objects
class Container : public Component
{
protected:
    vector<Component*> children;

public:
    Container(int x, int y, int width, int height) : Component(x, y, width, height) {}
    void add( Component* child)
    {
        children.push_back(child);
        // set the parent referene in the child classes
        // similar to setting next handler method
        child->container = this;
    }
};
