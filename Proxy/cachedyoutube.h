#pragma once
#include <iostream>
#include "youtubeinterface.h"
#include <string>
#include<unordered_map>
using namespace std;

// Proxy youtube class with caching mechanism.
class CachedYoutube : public YoutubeInterface
{
private:
    YoutubeInterface *service;
    string* list;
    unordered_map<string, bool> downloadMap;

public:
    // service should be passed as a parameter to the proxy constructor.
    explicit CachedYoutube(YoutubeInterface *ser) : service(ser) 
    {
        // bring the list from the service
        list = service->listVideos(false);
        for(int i = 0; i < 5; i++)
        {
            downloadMap[list[i]] = false;
        }
    }
    string *listVideos(bool display = true)
    {
        if (display)
        {
            cout << "Listing the available videos" << endl;
            for (int i = 0; i < 5; i++)
            {
                cout << list[i] << ": ";
                cout << (downloadMap[list[i]] ? "cached" : "not cached") << endl;
            }
        }
        return list;
    }
    void downloadVideo(string name)
    {
        if(downloadMap[name])
            cout << "Using the cached video: " << name << endl;
        else
        {
            service->downloadVideo(name);
            downloadMap[name] = true;
        }
    }
};