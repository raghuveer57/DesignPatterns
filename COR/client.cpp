#include <iostream>
#include "button.h"
#include "dialog.h"
#include "panel.h"

// function helper to show the tool tip
void ShowToolTip(ComponentToolTip* tooltip)
{
    tooltip->showToolTip();
}

int main()
{
    Dialog* dialog = new Dialog(0,0,0,0);
    dialog->setToolTip("This is a dialog");
    ShowToolTip(dialog);
    Button* button = new Button(0,0,0,0);
    button->setToolTip("This is a button1");
    dialog->add(button);
    Button* button1 = new Button(0,0,0,0);
    // comment/uncomment the below line to see the behaviour of COR
    //button1->setToolTip("This is a button2");
    dialog->add(button1);
    ShowToolTip(button);
    ShowToolTip(button1);
    Panel* panel = new Panel(0,0,0,0);
    // comment/uncomment the below line to  see the behaviour of COR
    //panel->setToolTip("This is a panel");
    ShowToolTip(panel);
    delete(button);
    delete(button1);
    delete(dialog);
    return 0;
}
