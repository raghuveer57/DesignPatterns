#pragma once
#include <iostream>
using namespace std;

// Interface for all the event listeners
class EventListener
{
   public:
   // method to be implemented by all the listeners
   // will be called when the publisher notifies
   virtual void Update(string filename) = 0;
};

class EmailAlertsListener : public EventListener
{
   public:
   void Update(string filename)
   {
      cout << "Send email udpate for : " << filename << endl;
   }
};

class LoggingListener : public EventListener
{
    public:
   void Update(string filename)
   {
      cout << "Send logger update for : " << filename << endl;
   }
};