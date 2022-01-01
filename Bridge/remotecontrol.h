#pragma once
#include <iostream>
#include "device.h"

using namespace std;

//abstraction
class RemoteControl
{
protected:
    //reference to the implementation object
    Device *deviceptr;

public:
    RemoteControl(Device &dev) { deviceptr = &dev; }
    virtual void togglePower()
    {
        if (deviceptr->isEnabled())
            deviceptr->disable();
        else
            deviceptr->enable();
        cout << deviceptr->getName() << " is " << deviceptr->isEnabled() << endl;
    }
    virtual void volumeUp()
    {
        deviceptr->setVolume(deviceptr->getVolume() + 1);
        cout << deviceptr->getName() << " Volume is increased to " << deviceptr->getVolume() << endl;
    }
    virtual void volumeDown()
    {
        deviceptr->setVolume(deviceptr->getVolume() - 1);
        cout << deviceptr->getName() << " Volume is decreased to " << deviceptr->getVolume() << endl;
    }
    virtual void channelUp()
    {
        deviceptr->setChannel(deviceptr->getChannel() + 1);
        cout << deviceptr->getName() << " Channel is increased to " << deviceptr->getChannel() << endl;
    }
    virtual void channelDown()
    {
        deviceptr->setChannel(deviceptr->getChannel() - 1);
        cout << deviceptr->getName() << " Channel is increased to " << deviceptr->getChannel() << endl;
    }
};

//refined abstraction
class AdvancedRemoteControl : public RemoteControl
{
public:
    AdvancedRemoteControl(Device &dev) : RemoteControl(dev) {}
    virtual void mute()
    {
        deviceptr->setVolume(0);
        cout << deviceptr->getName() <<" Volume is muted. "
             << "Now the volume is " << deviceptr->getVolume() << endl;
    }
};