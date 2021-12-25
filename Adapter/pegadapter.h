#pragma once
#include "pegs.h"
#include "math.h"

//Adapter class implementing multiple inheritance to bridge between the two interfaces
class PegAdapter : public RoundPeg, public SquarePeg
{
public:
    PegAdapter() : RoundPeg(),SquarePeg(){}

    // constructors to hook in the pegs to the adapter class
    PegAdapter(RoundPeg &rPeg)
    {
        radius = rPeg.getRadius();
        side = convertRadiusToSide(radius);
    }
    PegAdapter(SquarePeg &sPeg)
    {
        side = sPeg.getSide();
        radius = convertSideToRadius(side);
    }

    //Adapter functions for two way conversion
    int convertRadiusToSide(int rad)
    {
        return rad * sqrt(2);
    }
    int convertSideToRadius(int side)
    {
        return side / sqrt(2);
    }
};
