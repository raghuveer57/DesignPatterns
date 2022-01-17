#pragma once
#include <string>
#include <iostream>
using namespace std;

// Component interface - the common interface for the concrete component and decorator classes
class Datasource
{

public:
    string method;
    // can be forced to be implemented in the derived classes as per the requirements.
    virtual void writeData(string data)
    {
        cout << method + data << endl;
    }
};
