#ifndef CLIMB_PAUSE_PLAYER_STATE_H
#define CLIMB_PAUSE_PLAYER_STATE_H

#include <PlayerState.h>

class ClimbPausePlayerState : public PlayerState {
public:
	virtual PlayerState* handleInput(Input& input);
	virtual void update(Player&);
	virtual void enter(Player&);
	virtual void exit(Player&);
};

#endif
