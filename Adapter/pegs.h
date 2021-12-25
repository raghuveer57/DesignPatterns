#pragma once

// Two classes with different interfaces
class RoundPeg
{
protected:
    int radius;

public:
    RoundPeg(int rad) : radius(rad) {}
    RoundPeg() : radius(0) {}
    virtual int getRadius() { return radius; }
};

class SquarePeg
{
protected:
    int side;

public:
    SquarePeg(int a) : side(a) {}
    SquarePeg() : side(0) {}
    virtual int getSide() { return side; }
};