#pragma once
#include <iostream>
#include <string>
using namespace std;

// Flyweight class consisting of color and texture since they take up more space
// Common across different tree objects.
class TreeType
{
private:
    string mName;
    string mColor;
    string mTexture;

public:
    // using an explicit constructor to make the class immutable( accepting a single way to construct the objects)
    TreeType(string name, string color, string texture) : mName(name), mColor(color), mTexture(texture) {}
    TreeType() {}
    void draw(int x, int y)
    {
        cout << "Name: " << mName << " ";
        cout << "Color: " << mColor << " ";
        cout << "Texture: " << mTexture << " ";
        cout << "Position (" << x << "," << y << ")" << endl;
    }
    bool find(string& name)
    {
        if (name == mName)
            return true;
        return false;
    }
};
