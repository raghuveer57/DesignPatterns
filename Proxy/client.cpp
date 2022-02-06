#include <iostream>
#include "youtube.h"
#include "cachedyoutube.h"
#include <algorithm>

using namespace std;

int main()
{
    Youtube* tube= new Youtube();
    CachedYoutube * cachedTube = new CachedYoutube(tube);
    cachedTube->listVideos();
    cachedTube->downloadVideo("davie");
    // davie should be cached
    cachedTube->listVideos();
    // downloading davie again should pickup the video from cache
    cachedTube->downloadVideo("davie");
    return 0;
}