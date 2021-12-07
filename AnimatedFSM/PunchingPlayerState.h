#pragma once
#include <PlayerState.h>
class PunchingPlayerState : public PlayerState
{
public:
	virtual PlayerState* handleInput(Input& input);
	virtual void update(Player&);
	virtual void enter(Player&);
	virtual void exit(Player&);
};

