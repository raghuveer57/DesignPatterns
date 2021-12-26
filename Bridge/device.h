#pragma once
#include <string>

using namespace std;

// interface for all the devices.
class Device
{
protected:
    bool enabled;
    string name;
    int volume, channel;
    explicit Device(string nam, int vol, int chn, bool enable) : name(nam), volume(vol), channel(chn), enabled(enable) 
    {
        cout << "Device is " << name << endl;
        cout << "\tVolume is " << volume << endl;
        cout << "\tChannel is " << channel << endl;
    }

public:
    virtual bool isEnabled() { return enabled; }
    virtual void enable() { enabled = true; }
    virtual void disable() { enabled = false; }
    virtual int getVolume() { return volume; }
    virtual void setVolume(int vol) { volume = vol; }
    virtual int getChannel() { return channel; }
    virtual void setChannel(int chn) { channel = chn; }
    virtual string getName() { return name; }
};

//Televison Device - concrete implementation
class Tv : public Device
{
public:
    // default values for TV device
    Tv() : Device("TV", 10, 10, false) {}
};

//Radio Device - concrete implementation
class Radio : public Device
{
public:
    //default values for Radio device
    Radio() : Device("Radio", 5, 5, true) {}
};