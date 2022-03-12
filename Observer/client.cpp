#include <iostream>
#include "eventmanager.h"
using namespace std;

int main()
{
   EmailAlertsListener* emailListener = new EmailAlertsListener();
   LoggingListener* loggerListener = new LoggingListener();
   EventManager* manager = new EventManager();
   manager->notify("test"); // no subs
   manager->subscribe(emailListener);
   manager->subscribe(loggerListener);
   manager->notify("test"); // both 
   manager->unsubscribe(emailListener);
   manager->notify("test"); // only logger 
}