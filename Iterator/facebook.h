#pragma once
#include "socialnetwork.h"
#include "facebookiterator.h"

using namespace std;

//concrete facebook class which implements the social network interface
class FaceBook  : public SocialNetwork
{
public:
    FaceBook(shared_ptr<Profile> profile) : SocialNetwork(profile) {}

    // Factory methods for iterators
    unique_ptr<ProfileIterator> createFriendsIterator() override
    {
        return make_unique<FacebookIterator>( make_unique<FaceBook>(*this),"friends");
    }
    unique_ptr<ProfileIterator> createCoworkersIterator() override
    {
       return make_unique<FacebookIterator>( make_unique<FaceBook>(*this),"coworkers");
    }
};