#include "PunchingPlayerState.h"
#include "JumpingPlayerState.h"

#include <IdlePlayerState.h>
#include <RunLeftPlayerState.h>
#include <RunRightPlayerState.h>
#include <ClimbLadderPlayerState.h>

PlayerState* PunchingPlayerState::handleInput(Input& input)
{
	if (input.getCurrent() == Input::Action::SPACE_PRESS)
	{
		DEBUG_MSG("PunchingPlayerState -> JumpingPlayerState");
		return new JumpingPlayerState();
	}
	else if (input.getCurrent() == Input::Action::LEFT_PRESS) {
		DEBUG_MSG("PunchingPlayerState -> RunLeftPlayerState");
		return new RunLeftPlayerState();
	}
	else if (input.getCurrent() == Input::Action::RIGHT_PRESS) {
		DEBUG_MSG("PunchingPlayerState -> RunRightPlayerState");
		return new RunRightPlayerState();
	}
	else if (input.getCurrent() == Input::Action::HIT_LADDER_BOTTOM_EVENT)
	{
		DEBUG_MSG("PunchingPlayerState -> ClimbLadderPlayerState");
		return new ClimbLadderPlayerState();
	}
	else if (input.getCurrent() == Input::Action::X_RELEASE)
	{
		DEBUG_MSG("PunchingPlayerState -> IdlePlayerState");
		return new IdlePlayerState();
	}
	return nullptr;
}

void PunchingPlayerState::update(Player&){}

void PunchingPlayerState::enter(Player& player)
{
	DEBUG_MSG("Entering PunchingPlayerState");
	player;
}

void PunchingPlayerState::exit(Player& player)
{
	DEBUG_MSG("Exiting PunchingPlayerState");
	player;
}
