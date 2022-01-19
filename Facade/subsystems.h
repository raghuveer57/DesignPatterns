#pragma once
#include <iostream>
#include <string>
using namespace std;

// Complex subsystem classes

class VideoFile
{
private:
    string fileName;

public:
    VideoFile(string name) : fileName(name) {}
    string getFileName()
    {
        return fileName;
    }
};

class BaseCodec
{
protected:
    string codecName;

public:
    BaseCodec(string codec) : codecName(codec) {}
    string getCodecName()
    {
        return codecName;
    }
};

class OggCompressionCodec : public BaseCodec
{
public:
    OggCompressionCodec() : BaseCodec("OGG") {}
};

class MPEG4CompressionCodec : public BaseCodec
{
public:
    MPEG4CompressionCodec() : BaseCodec("MP4") {}
};

class BitrateReader
{
public:
    void convert(VideoFile file, BaseCodec codec)
    {
        cout << "Converting " << file.getFileName() << " with " << codec.getCodecName() << endl;
    }
};