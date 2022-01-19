#pragma once
#include<string>
#include "subsystems.h"
using namespace std;

// Facade class to hide the complexicity of the subsystem framework

class VideoConvertor
{
    public:
    void convert(string filename, string format)
    {
        auto videofile = VideoFile(filename);
        BaseCodec codec = BaseCodec("");
        if (format == "mp4")
            codec = MPEG4CompressionCodec();
        else
            codec = OggCompressionCodec();
        auto bitratereader = BitrateReader();
        bitratereader.convert(videofile,codec);
    }
};
