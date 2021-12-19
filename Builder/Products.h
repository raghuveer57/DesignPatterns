#pragma once

#include <iostream>

using namespace std;

// It is possible that the product classes do not implement the same interface.
//Product1 car class
class Car
{
private:
    int nSeats;
    char *sEngine;
    char *sModelName;

public:
    void reset()
    {
        cout << "Resetting the CAR" << endl;
        nSeats = 0;
        sEngine = "";
        sModelName = "";
    }

    void setSeats(int number)
    {
        cout << "Setting the seats to " << number << " in the CAR" << endl;
        nSeats = number;
    }

    void setEngine(char *engineName)
    {
        cout << "Setting the engine to " << engineName << " in the CAR" << endl;
        sModelName = engineName;
    }

    void setModelName(char *modelName)
    {
        cout << "Setting the model name to " << modelName << " in the CAR" << endl;
        sModelName = modelName;
    }

    //car specific method which assembles the car
    void assembleCar()
    {
        cout << "Assembling the CAR" << endl;
        cout << "Seats :" << nSeats << endl;
        cout << "Engine: " << sEngine << endl;
        cout << "Model: " << sModelName << endl;
        cout << endl;
    }
};

// Product2 car manual class
class CarManual
{
private:
    int nSeats;
    char *sEngine;
    char *sModelName;

public:
    void reset()
    {
        cout << "Resetting the CAR MANUAL" << endl;
        nSeats = 0;
        sEngine = "";
        sModelName = "";
    }

    void setSeats(int number)
    {
        cout << "Setting the seats to " << number << " in the CAR MANUAL" << endl;
        nSeats = number;
    }

    void setEngine(char *engineName)
    {
        cout << "Setting the engine to " << engineName << " in the CAR MANUAL" << endl;
        sModelName = engineName;
    }

    void setModelName(char *modelName)
    {
        cout << "Setting the model name to " << modelName << " in the CAR MANUAL" << endl;
        sModelName = modelName;
    }

    //car manual specific method for printing the car manual
    void printCarManual()
    {
        cout << "Printing the CAR MANUAL" << endl;
        cout << "Seats :" << nSeats << endl;
        cout << "Engine: " << sEngine << endl;
        cout << "Model: " << sModelName << endl;
        cout << endl;
    }
};