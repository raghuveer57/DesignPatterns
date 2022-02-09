#pragma once
#include <iostream>

// tool tip interface of the component and container classes
class ComponentToolTip
{
    public:
    virtual void showToolTip() = 0;
    virtual void setToolTip(char* tooltip) = 0;
};
