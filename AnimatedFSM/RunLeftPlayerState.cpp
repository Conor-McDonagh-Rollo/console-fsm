#include <RunLeftPlayerState.h>

#include <IdlePlayerState.h>
#include <RunRightPlayerState.h>
#include <ClimbLadderPlayerState.h>

#include <PunchingPlayerState.h>
#include <JumpingPlayerState.h>

PlayerState* RunLeftPlayerState::handleInput(Input& input)
{
	if (input.getCurrent() == Input::Action::LEFT_RELEASE)
	{
		DEBUG_MSG("RunLeftPlayerState -> IdlePlayerState");
		return new IdlePlayerState();
	}
	else if (input.getCurrent() == Input::Action::HIT_WALL_EVENT)
	{
		DEBUG_MSG("RunLeftPlayerState -> IdlePlayerState");
		return new IdlePlayerState();
	}
	else if (input.getCurrent() == Input::Action::RIGHT_PRESS)
	{
		DEBUG_MSG("RunLeftPlayerState -> RunRightPlayerState");
		return new RunRightPlayerState();
	}
	else if (input.getCurrent() == Input::Action::HIT_LADDER_BOTTOM_EVENT)
	{
		DEBUG_MSG("RunLeftPlayerState -> ClimbLadderPlayerState");
		return new ClimbLadderPlayerState();
	}
	else if (input.getCurrent() == Input::Action::SPACE_PRESS) {
		DEBUG_MSG("RunLeftPlayerState -> JumpingPlayerState");
		return new JumpingPlayerState();
	}
	else if (input.getCurrent() == Input::Action::X_PRESS) {
		DEBUG_MSG("RunLeftPlayerState -> PunchingPlayerState");
		return new PunchingPlayerState();
	}
	return nullptr;
}
void RunLeftPlayerState::update(Player& player) {}
void RunLeftPlayerState::enter(Player& player) 
{
	DEBUG_MSG("Entering RunLeftPlayerState");
}
void RunLeftPlayerState::exit(Player& player)
{
	DEBUG_MSG("Exiting RunLeftPlayerState");
}