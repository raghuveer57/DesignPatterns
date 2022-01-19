#include<iostream>
#include"videoconverter.h"
using namespace std;

int main()
{
    VideoConvertor vconverter = VideoConvertor();
    // client only interacts with the facade classes and does not know about subsystem classes
    vconverter.convert("test1", "mp4");
    vconverter.convert("test2", "mkv");
    return 0;
}