#pragma once

#include <iostream>
#include "Builders.h"

//Director class
// change the builder
// create construction routines for complex products
// Adding new concrete builder types does not effect this class
class Director
{
private:
    Builder *mBuilder;

public:
    void changeBuilder(Builder* builder)
    {
        mBuilder = builder;
    }
    //constrcution routine to 
    void createInnova()
    {
        mBuilder->reset();
        mBuilder->setSeats(9);
        mBuilder->setEngine("2.0 engine");
        mBuilder->setModelName("Toyota Innova");
        mBuilder->deliverProduct();
    }
    void createTiago()
    {
        mBuilder->reset();
        mBuilder->setSeats(4);
        mBuilder->setEngine("1.2 engine");
        mBuilder->setModelName("Tata Tiago");
        mBuilder->deliverProduct();
    }
};