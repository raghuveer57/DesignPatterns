#pragma once
#include <iostream>
#include "container.h"
#include <vector>

using namespace std;

// Panel container
class Panel : public Container
{
    private:
    string mPanelTooltip;

public:
    Panel(int x, int y, int width, int height) : Container(x, y, width, height) {}
    void showToolTip()
    {
        if (mPanelTooltip != "")
            cout << "Panel Tooltip: " << mPanelTooltip << endl;
        else
            Container::showToolTip();
    }
    void setToolTip(char* tooltip)
    {
        mPanelTooltip = tooltip;
    }
};
