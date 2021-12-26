#include <iostream>
#include "device.h"
#include "remotecontrol.h"

using namespace std;

//client's job is to associate the abstraction constructor with the implementation object.
int main()
{
    Tv television = Tv();
    Radio radio = Radio();

    RemoteControl tvremote = RemoteControl(television);
    RemoteControl radioremote = RemoteControl(radio);
    AdvancedRemoteControl advtcremote = AdvancedRemoteControl(television);

    tvremote.volumeUp();
    tvremote.volumeDown();
    radioremote.channelUp();
    radioremote.channelDown();
    advtcremote.mute();
}