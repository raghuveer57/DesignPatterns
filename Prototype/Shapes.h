#pragma once

#include <iostream>
#include <string>

using namespace std;

//base prototype
class Shape
{
protected:
    int x;
    int y;
    string color;

public:
    Shape() {}
    // parameterized constructor
    Shape(int xPos, int yPos, string shapeColor) : x(xPos), y(yPos), color(shapeColor) {}
    //copy constructor : required for cloning ( DEEP COPY )
    Shape(const Shape &obj)
    {
        this->x = obj.x;
        this->y = obj.y;
        this->color = obj.color;
    }
    // Prototype method - should be implented in the sub classes
    virtual Shape *clone()
    {
        Shape* temp = new Shape(*this);
        return temp;
    }

    virtual void Print()
    {
        cout << " x position = " << this->x << endl;
        cout << " y position = " << this->y << endl;
        cout << " color = " << this->color << endl;
    }
};

// concrete prototype1
class Rectangle : public Shape
{
private:
    int width;
    int height;

public:
    Rectangle(int xPos, int yPos, string shapeColor, int rectWidth, int rectHeight) : Shape(xPos, yPos, shapeColor), width(rectWidth), height(rectHeight) {}

    Rectangle(const Rectangle &obj)
    {
        this->x = obj.x;
        this->y = obj.y;
        this->color = obj.color;
        this->height = obj.height;
        this->width = obj.width;
    }

    virtual Shape *clone()
    {
        Shape* temp = new Rectangle(*this);
        return temp;
    }

    virtual void Print()
    {
        cout << "Rectangle" << endl;
        Shape::Print();
        cout << " rectangle width = " << this->width << endl;
        cout << " rectangle height = " << this->height << endl;
    }
};

// concrete prototype2
class Circle : public Shape
{
private:
    int radius;

public:
    Circle(int xPos, int yPos, string shapeColor, int circleRadius) : Shape(xPos, yPos, shapeColor), radius(circleRadius) {}

    Circle(const Circle &obj)
    {
        this->x = obj.x;
        this->y = obj.y;
        this->color = obj.color;
        this->radius = obj.radius;
    }

    virtual Shape *clone()
    {
        Shape* temp = new Circle(*this);
        return temp;
    }

    virtual void Print()
    {
        cout << "Circle" << endl;
        Shape::Print();
        cout << " circle radius = " << this->radius << endl;
    }
};