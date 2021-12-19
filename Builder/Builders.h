#pragma once

#include <iostream>
#include "Products.h"

// Builder Interface
// Divide the complex initialization part to individual abstract class methods that
// should be implemented by the concrete builders.
class Builder
{
public:
    virtual void reset() = 0;
    virtual void setSeats(int number) = 0;
    virtual void setEngine(char *engineName) = 0;
    virtual void setModelName(char *modelName) = 0;
    virtual void deliverProduct() = 0;
    virtual ~Builder(){};
};

// Car builder class
class CarBuilder : public Builder
{
private:
    Car mCar;

public:
    CarBuilder()
    {
        mCar = Car();
    }
    void reset()
    {
        mCar.reset();
    }
    void setSeats(int number)
    {
        mCar.setSeats(number);
    }
    void setEngine(char *engineName)
    {
        mCar.setEngine(engineName);
    }
    void setModelName(char *modelName)
    {
        mCar.setModelName(modelName);
    }
    void deliverProduct()
    {
        //car specific method
        mCar.assembleCar();
    }
};

//car manual builder class
class CarManualBuilder : public Builder
{
private:
    CarManual mCarManual;

public:
    CarManualBuilder()
    {
        mCarManual = CarManual();
    }
    void reset()
    {
        mCarManual.reset();
    }
    void setSeats(int number)
    {
        mCarManual.setSeats(number);
    }
    void setEngine(char *engineName)
    {
        mCarManual.setEngine(engineName);
    }
    void setModelName(char *modelName)
    {
        mCarManual.setModelName(modelName);
    }
    void deliverProduct()
    {
        //car manual specific method
        mCarManual.printCarManual();
    }
};
