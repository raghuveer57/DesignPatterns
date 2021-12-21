#include <iostream>
#include <vector>
#include "Shapes.h"

using namespace std;

int main()
{
    // intialization ( can be seperated to a different block)
    Shape *rect = new Rectangle(1, 1, "red", 10, 20);
    Shape *cir = new Circle(2, 2, "blue", 3);

    // business logic
    // does not care about the concrete classes.
    vector<Shape *> shapes;

    shapes.push_back(rect->clone());
    shapes.push_back(cir->clone());

    shapes[0]->Print();
    shapes[1]->Print();

    delete rect;
    delete cir;
}