#pragma once
#include <iostream>
#include "container.h"
#include <vector>

using namespace std;

// Dialog container
class Dialog : public Container
{
    private:
    string mDialogTooltip;
public:
    Dialog(int x, int y, int width, int height) : Container(x, y, width, height) {}
    void showToolTip()
    {
        if (mDialogTooltip != "")
            cout << "Dialog Tooltip: " << mDialogTooltip << endl;
        else
            Container::showToolTip();
    }
    void setToolTip(char* tooltip)
    {
        mDialogTooltip = tooltip;
    }
};
