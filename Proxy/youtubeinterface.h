#pragma once
#include <iostream>
using namespace std;

// Youtube interce that needs to be implemented by the 
// proxy class. This should be the same as the service interface.
// We can also subclass the service if it is from a library.
class YoutubeInterface
{
    public:
    virtual string* listVideos(bool display = true) = 0;
    virtual void downloadVideo(string name) = 0;
};