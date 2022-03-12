#pragma once
#include <iostream>
#include <list>
#include "eventlisteners.h"
using namespace std;

// observer class, which has methods to subscribe/unsubscribe 
// listeners
class EventManager
{
private:
    list<EventListener *> listeners;

public:
    // add listener to the listeners list
    void subscribe(EventListener *listener)
    {
        auto it = find(listeners.begin(), listeners.end(), listener);
        if (it != listeners.end())
            cout << " Already subscribed" << endl;
        else
            listeners.push_back(listener);
    }
    //remove listener from the listeners list
    void unsubscribe(EventListener *listener)
    {
        auto it = find(listeners.begin(), listeners.end(), listener);
        if (it == listeners.end())
            cout << "Already unsubscribed " << endl;
        else
            listeners.remove(listener);
    }
    //nofity all the listeners
    void notify(string filename)
    {
        for_each(listeners.begin(),listeners.end(),[&](EventListener* listener){ listener->Update(filename); });
    }
};
