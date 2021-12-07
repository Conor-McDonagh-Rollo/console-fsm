#ifndef LADDER_CLIMBED_PLAYER_STATE_H
#define LADDER_CLIMBED_PLAYER_STATE_H

#include <PlayerState.h>

class LadderClimbedPlayerState : public PlayerState {
public:
	virtual PlayerState* handleInput(Input& input);
	virtual void update(Player&);
	virtual void enter(Player&);
	virtual void exit(Player&);
};

#endif