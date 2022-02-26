#pragma once
#include <iostream>
#include <string>

using namespace std;

// Profile class where all the profile info is stored.
class Profile
{
private:
    string name;
    string email;

public:
    explicit Profile(string nam, string emai) : name(nam), email(emai) {}
    Profile(const Profile && other)
    {
        this->name = other.name;
        this->email = other.email;
    }
    string getName(){ return name;}
    string getEmail(){ return email;}
};