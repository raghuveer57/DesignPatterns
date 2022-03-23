#include <iostream>
#include "pegs.h"
#include "roundhole.h"
#include "pegadapter.h"

using namespace std;

int main()
{
    // round hole 
    RoundHole hole = RoundHole(5);

    // pegs 
    RoundPeg rpeg1 = RoundPeg (4);
    RoundPeg rpeg2 = RoundPeg (6);

    SquarePeg speg1 = SquarePeg (7);
    SquarePeg speg2 = SquarePeg (9);

    // Use adapter to wrap the square peg
    PegAdapter adap1 = PegAdapter(speg1);
    PegAdapter adap2 = PegAdapter(speg2);

    cout << "Round Hole : 5";
    cout << "Does hole fit round peg of size 4 :";
    cout << boolalpha<< hole.fits(rpeg1) << endl;
    cout << "Does hole fit round peg of size 6 ";
    cout << boolalpha<< hole.fits(rpeg2) << endl;
    cout << "Does hole fit square peg of size 7 ";
    cout << boolalpha<< hole.fits(adap1) << endl;
    cout << "Does hole fit square peg of size 9 ";
    cout << boolalpha<< hole.fits(adap2) << endl;

    return 0;
}