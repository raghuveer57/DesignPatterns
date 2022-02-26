#pragma once
#include<iostream>
#include "profile.h"

using namespace std;

// Interface that should be followed by 
// all the iterator classes
class ProfileIterator
{
    public:
    virtual shared_ptr<Profile> getNext() = 0;
    virtual bool hasNext() = 0;
    virtual ~ProfileIterator(){};
};