#include "shapes.h"

// double dispatch implementation
void Dot::accept(Visitor* visitor)
{
    visitor->visit(this);
}

void Circle::accept(Visitor* visitor)
{
    visitor->visit(this);
}

void Rectangle::accept(Visitor* visitor)
{
    visitor->visit(this);
}

void ComplexShape::accept(Visitor* visitor)
{
    visitor->visit(this);
}