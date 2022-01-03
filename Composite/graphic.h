#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Component interface.
// This is the interface which has to be implemented by both leaf and container classes
class Graphic
{
protected:
    int x, y;
    string name;

public:
    Graphic(int xpos, int ypos, string nam) : x(xpos), y(ypos), name(nam) {}

    // interface methods. These should be pure virtual functions ideally.
    // The implementation should be provided by the sub classes ideally.
    virtual void move(int xpos, int ypos)
    {
        int tempx = x;
        int tempy = y;
        x += xpos;
        y += ypos;
        cout << "Moved " << name << " from (" << tempx << "," << tempy << ") "
             << "to (" << x << "," << y << ")" << endl;
    }
    //interface method
    virtual void draw()
    {
        cout << "Drawing " << name << endl;
    }
};

// leaf class
class Dot : public Graphic
{

public:
    Dot(int xpos, int ypos, string nam) : Graphic(xpos, ypos, nam) {}
    
    // interface methods . For now using the base class implementation.
    void move(int xpos, int ypos)
    {
        Graphic::move(xpos, ypos);
    }
    void draw()
    {
        Graphic::draw();
    }
};

// leaf class
class Circle : public Dot
{
protected:
    int radius;

public:
    Circle(int xpos, int ypos, string nam, int rad) : Dot(xpos, ypos, nam), radius(rad) {}
    // interface methods . For now using the base class implementation.
    void move(int xpos, int ypos)
    {
        Dot::move(xpos, ypos);
    }
    void draw()
    {
        Dot::draw();
    }
};

//container/composite class
class CompoundGraphic : public Graphic
{
private:
    // An array like structure to keep track of children
    vector<Graphic> graphicElements;

public:
    CompoundGraphic(int xpos, int ypos, string nam) : Graphic(xpos, ypos, nam) {}
    void draw()
    {
        Graphic::draw();
        // loop the children and run the interface draw method
        for_each(graphicElements.begin(), graphicElements.end(), [](Graphic &element)
                 { element.draw(); });
    }
    void move(int xpos, int ypos)
    {
        Graphic::move(xpos, ypos);
        // loop the children and run the interface move method
        for_each(graphicElements.begin(), graphicElements.end(), [&](Graphic &element)
                 { element.move(xpos, ypos); });
    }
    // method to add the children to the array
    void addChildren(Graphic element)
    {
        graphicElements.push_back(element);
    }
    //method to remove the children from the array
    void removeChildren()
    {
        graphicElements.clear();
    }
};