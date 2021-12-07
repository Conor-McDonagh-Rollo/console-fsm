#ifndef CLIMB_LADDER_PLAYER_STATE_H
#define CLIMB_LADDER_PLAYER_STATE_H

#include <PlayerState.h>

class ClimbLadderPlayerState : public PlayerState {
public:
	virtual PlayerState* handleInput(Input& input);
	virtual void update(Player&);
	virtual void enter(Player&);
	virtual void exit(Player&);
};

#endif
