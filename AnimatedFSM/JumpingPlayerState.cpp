#include "JumpingPlayerState.h"
#include "IdlePlayerState.h"

#include <IdlePlayerState.h>
#include <ClimbLadderPlayerState.h>

PlayerState* JumpingPlayerState::handleInput(Input& input)
{
	if (input.getCurrent() == Input::Action::HIT_GROUND_EVENT)
	{
		DEBUG_MSG("JumpingPlayerState -> IdlePlayerState");
		return new IdlePlayerState();
	}
	else if (input.getCurrent() == Input::Action::SPACE_RELEASE)
	{
		DEBUG_MSG("JumpingPlayerState -> IdlePlayerState");
		return new IdlePlayerState();
	}
	else if (input.getCurrent() == Input::Action::HIT_LADDER_BOTTOM_EVENT)
	{
		DEBUG_MSG("JumpingPlayerState -> ClimbLadderPlayerState");
		return new ClimbLadderPlayerState();
	}
	return nullptr;
}

void JumpingPlayerState::update(Player&){}

void JumpingPlayerState::enter(Player& player)
{
	DEBUG_MSG("Entering JumpingPlayerState");
	player;
}

void JumpingPlayerState::exit(Player& player)
{
	DEBUG_MSG("Exiting JumpingPlayerState");
	player;
}
