#pragma once
#include "pegs.h"

class RoundHole
{
private:
    int radius;

public:
    RoundHole(int rad) : radius(rad) {}
    bool fits(RoundPeg &rPeg)
    {
        return (radius >= rPeg.getRadius());
    }
};