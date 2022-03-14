#include <iostream>
#include "audioplayer.h"
using namespace std;

int main()
{
  AudioPlayer* player = new AudioPlayer();
  player->clickNext();
  player->clickLock();
  player->clickNext();
  player->clickLock();
  player->clickNext();
  player->clickPlay();
  player->clickPlay();
}