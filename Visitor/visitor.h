#pragma once
#include "shapes.h"

class Dot;
class Circle;
class Rectangle;
class ComplexShape;
// visitor interface that every concrete visitor class must implement
// visitor sub classes will have to implement visit method for each concrete element
class Visitor
{
public:
    virtual void visit(Dot *dot) = 0;
    virtual void visit(Circle *dot) = 0;
    virtual void visit(Rectangle *dot) = 0;
    virtual void visit(ComplexShape *dot) = 0;
};

class XMLExportVisitor : public Visitor
{
public:
    void visit(Dot *dot);
    void visit(Circle *circle);
    void visit(Rectangle *rectangle);
    void visit(ComplexShape *complexShape);
};

class HTMLExportVisitor : public Visitor
{
public:
    void visit(Dot *dot);
    void visit(Circle *circle);
    void visit(Rectangle *rectangle);
    void visit(ComplexShape *complexShape);
};