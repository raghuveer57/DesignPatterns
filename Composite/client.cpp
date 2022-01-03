#include <iostream>
#include "graphic.h"

int main()
{
    Graphic dot = Dot(1, 1, "Dot");
    Graphic  circle = Circle(2,2,"Circle",5);
    CompoundGraphic container = CompoundGraphic(3,3,"container");
    container.addChildren(dot);
    container.addChildren(circle);
    container.draw();
    container.move(3,3);
    container.removeChildren();
    container.draw();
    container.move(-3,-3);
    return 0;
}
