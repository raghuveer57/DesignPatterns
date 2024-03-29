#pragma once

#include <iostream>
#include <string>
#include <mutex>

using namespace std;

mutex myMutex;

class Database
{
private:
    // point to hold the singleton instance
    static Database *instance;

    //private constructor
    Database()
    {
        cout << "Database constructor is called" << endl;
    };

public:
    // static singleton get instance method
    static Database *getInstance()
    {
        //Also handle thread safety code.
        std::lock_guard<std::mutex> lock(myMutex);
        // lazy initialization
        if (instance == nullptr)
            instance = new Database();
        return instance;
    }

    void runQuery(string query)
    {
        cout << "Running " << query << " in the database" << endl;
    }
};

Database *Database::instance = nullptr;