#pragma once
#include <iostream>
#include "componenttooltip.h"

using namespace std;

// tool tip interface of the component and container classes
class Component : public ComponentToolTip
{
private:
    int mX, mY, mWidth, mHeight;
    string mComponentToolTip; // Default tooltip for the Component class

public:
    ComponentToolTip *container;
    Component(int x, int y, int width, int height) : mX(x), mY(y), mWidth(width), mHeight(height), container(NULL) {}

    void showToolTip()
    {
        if (mComponentToolTip != "")
            cout << "Component Tooltip: " << mComponentToolTip << endl;
        else
        {
            // call the container tool tip
            if (container)
                container->showToolTip();
            else
                cout << "Default tooltip" << endl;
        }
    }

    void setToolTip(char *tooltip)
    {
        mComponentToolTip = tooltip;
    }
};
