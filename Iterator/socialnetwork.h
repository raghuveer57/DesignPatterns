#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "profile.h"
#include "profileiterator.h"

using namespace std;

// Collection Interface
// Must declare factory methods for producing iterators
// You can declare multiple methods for different kinds of
// iterations

class SocialNetwork
{
protected:
    // for now we are using just name and email inside the profile class
    // In typical situations this could have the complete profile info
    shared_ptr<Profile> mainProfile;

    // profiles
    vector<shared_ptr<Profile>> friends;
    vector<shared_ptr<Profile>> coworkers;

public:
    explicit SocialNetwork(shared_ptr<Profile> profile) : mainProfile(std::move(profile)) {}
    virtual ~SocialNetwork() {}
    void addFriend(shared_ptr<Profile> frnd)
    {
        friends.push_back(std::move(frnd));
    }
    void addCoworker(shared_ptr<Profile> worker)
    {
        coworkers.push_back(std::move(worker));
    }
    size_t numOfFriends()
    {
        return friends.size();
    }
    size_t numOfCoworkers()
    {
        return coworkers.size();
    }

    shared_ptr<Profile> friendsAt(size_t index)
    {
        if (index >= friends.size())
        {
            cout << "Invalid index" << endl;
        }
        return friends.at(index);
    }

    shared_ptr<Profile> coworkersAt(size_t index)
    {
        if (index >= coworkers.size())
        {
            cout << "Invalid index" << endl;
        }
        return coworkers.at(index);
    }

    // Factory methods for iterators
    virtual unique_ptr<ProfileIterator> createFriendsIterator() = 0;
    virtual unique_ptr<ProfileIterator> createCoworkersIterator() = 0;
};