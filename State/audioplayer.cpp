#include "audioplayer.h"

using namespace std;

AudioPlayer::AudioPlayer() : mState(new PauseState(this)), isPlaying(false) {}
void AudioPlayer::changeState(State *state)
{
    // clear the previous state and assign the new state
    delete mState;
    mState = nullptr;
    mState = state;
}

void AudioPlayer::clickLock()
{
    mState->clickLock();
}
void AudioPlayer::clickPlay()
{
    mState->clickPlay();
}
void AudioPlayer::clickNext()
{
    mState->clickNext();
}
void AudioPlayer::clickPrev()
{
    mState->clickPrev();
}

void PauseState::clickLock()
{
    mPlayer->changeState(new LockState(mPlayer));
}
void PauseState::clickPlay()
{
    mPlayer->startPlayback();
    mPlayer->changeState(new PlayState(mPlayer));
}
void PauseState::clickNext()
{
    mPlayer->nextTrack();
}
void PauseState::clickPrev()
{
    mPlayer->prevTrack();
}

void LockState::clickLock()
{
    if (mPlayer->isPlaying)
        mPlayer->changeState(new PlayState(mPlayer));
    else
        mPlayer->changeState(new PauseState(mPlayer));
}
void LockState::clickPlay()
{
    cout << "Player is locked" << endl;
}
void LockState::clickNext()
{
    cout << "Player is locked" << endl;
}
void LockState::clickPrev()
{
    cout << "Player is locked" << endl;
}

void PlayState::clickLock()
{
    mPlayer->changeState(new LockState(mPlayer));
}
void PlayState::clickPlay()
{
    mPlayer->stopPlayback();
    mPlayer->changeState(new PauseState(mPlayer));
}
void PlayState::clickNext()
{
    mPlayer->nextTrack();
}
void PlayState::clickPrev()
{
    mPlayer->prevTrack();
}