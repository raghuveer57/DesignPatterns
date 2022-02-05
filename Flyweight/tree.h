#pragma once
#include <iostream>
#include "treetype.h"
using namespace std;

// Context class which will contain both the intrinsic part and 
// the extrinsic part.
class Tree
{
private:
    //Intrinsic( Unique) part
    int mX;
    int mY;
    // Extrinsic (Common) part
    TreeType mType;

public:
    Tree(int x, int y, TreeType type) : mX(x), mY(y), mType(type){};
    void draw()
    {
        mType.draw(mX,mY);
    }
};
