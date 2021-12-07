#ifndef IDLE_PLAYER_STATE_H
#define IDLE_PLAYER_STATE_H

#include <PlayerState.h>

class IdlePlayerState : public PlayerState{
public:
	virtual PlayerState* handleInput(Input& input);
	virtual void update(Player&);
	virtual void enter(Player&);
	virtual void exit(Player&);
};
#endif