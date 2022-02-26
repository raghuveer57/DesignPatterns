#pragma once
#include <iostream>
#include "profileiterator.h"
#include "socialnetwork.h"

using namespace std;

// Interface that should be followed by
// all the iterator classes
class FacebookIterator : public ProfileIterator
{
private:
    int currentIndex;
    shared_ptr<SocialNetwork> myNetwork;
    string iteratorType;
    int noOfElements;

public:
    explicit FacebookIterator(shared_ptr<SocialNetwork> network, string type) : myNetwork(network), iteratorType(type), currentIndex(-1)
    {
        if (iteratorType == "friends")
            noOfElements = myNetwork->numOfFriends();
        else if (iteratorType == "coworkers")
            noOfElements = myNetwork->numOfCoworkers();
        else
        {
            cout << "Invalid iterator type" << endl;
            noOfElements = 0;
        }
    }
    shared_ptr<Profile> getNext()
    {
        if(hasNext())
        {
            ++currentIndex;
            if(iteratorType == "friends")
                return myNetwork->friendsAt(currentIndex);
            else if (iteratorType == "coworkers")
                return myNetwork->coworkersAt(currentIndex);
        }
        cout << "End reached: returning nullptr" << endl;
        return nullptr;
    }
    virtual bool hasNext()
    {
        return (currentIndex  < (noOfElements - 1)) ;
    }
};