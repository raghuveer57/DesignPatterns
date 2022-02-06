#pragma once
#include <iostream>
#include "youtubeinterface.h"
#include <string>
using namespace std;

// Service youtube class which has the original service
class Youtube : public YoutubeInterface
{
private:
    string list[5] = {"davie", "charles", "wooten", "cliff", "harris"};

public:
    string* listVideos(bool display = true)
    {
        if(display)
        {
            cout << "Listing the available videos" << endl;
            for( int i =0; i < 5 ; i++)
            {
                cout << list[i] << endl;
            }
        }
        return list;
    }
    void downloadVideo(string name)
    {
        cout << "Dowloading video " << name << endl;
    }
};