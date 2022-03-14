#pragma once
#include <iostream>
using namespace std;
class State;
class AudioPlayer
{
private:
   State *mState;
   // Player will have player specific field like
   // currentSong, volume, etc
public:
   AudioPlayer();
   bool isPlaying;
   // method to change the state
   void changeState(State *state);

   // methods for which the actions are delegated to state
   void clickLock();
   void clickPlay();
   void clickNext();
   void clickPrev();
   //  Player methods
   void startPlayback()
   {
      cout << "Starting Playback" << endl;
   }
   void stopPlayback()
   {
      cout << "Stopping Playback" << endl;
   }
   void nextTrack()
   {
      cout << "Playing next track" << endl;
   }
   void prevTrack()
   {
      cout << "Playing prev track" << endl;
   }
};

// interface for all the states
class State
{
protected:
   AudioPlayer *mPlayer;

public:
   // constructor takes player
   State(AudioPlayer *player) : mPlayer(player) {}
   // abstract methods to be implemented by all the states
   virtual void clickLock() = 0;
   virtual void clickPlay() = 0;
   virtual void clickNext() = 0;
   virtual void clickPrev() = 0;
   virtual ~State() {}
};

// concrete state classes
class PauseState : public State
{
public:
   PauseState(AudioPlayer *player) : State(player) {}
   void clickLock();
   void clickPlay();
   void clickNext();
   void clickPrev();
};
class LockState : public State
{
public:
   LockState(AudioPlayer *player) : State(player) {}
   void clickLock();
   void clickPlay();
   void clickNext();
   void clickPrev();
};
class PlayState : public State
{
public:
   PlayState(AudioPlayer *player) : State(player) {}
   void clickLock();
   void clickPlay();
   void clickNext();
   void clickPrev();
};