#include <iostream>
#include "Director.h"
#include "Builders.h"

using namespace std;

// Client appalications have no knowlege of the products
// They just associate the corresponding builder with the Director and run the consturction routines.
int main()
{
    Director* director = new Director();
    Builder* builder = new CarBuilder();
    director->changeBuilder(builder);
    director->createInnova();
    director->createTiago();
    delete builder;
    builder = new CarManualBuilder();
    director->createInnova();
    director->createTiago();
    delete builder;
    delete director;
}
