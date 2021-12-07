#include <RunRightPlayerState.h>

#include <IdlePlayerState.h>
#include <RunLeftPlayerState.h>
#include <ClimbLadderPlayerState.h>

#include <PunchingPlayerState.h>
#include <JumpingPlayerState.h>

PlayerState* RunRightPlayerState::handleInput(Input& input)
{
	if (input.getCurrent() == Input::Action::RIGHT_RELEASE)
	{
		DEBUG_MSG("RunRightPlayerState -> IdlePlayerState");
		return new IdlePlayerState();
	}
	else if (input.getCurrent() == Input::Action::HIT_WALL_EVENT)
	{
		DEBUG_MSG("RunRightPlayerState -> IdlePlayerState");
		return new IdlePlayerState();
	}
	else if (input.getCurrent() == Input::Action::LEFT_PRESS)
	{
		DEBUG_MSG("RunRightPlayerState -> RunLeftPlayerState");
		return new RunLeftPlayerState();
	}
	else if (input.getCurrent() == Input::Action::HIT_LADDER_BOTTOM_EVENT)
	{
		DEBUG_MSG("RunRightPlayerState -> ClimbLadderPlayerState");
		return new ClimbLadderPlayerState();
	}
	else if (input.getCurrent() == Input::Action::SPACE_PRESS) {
		DEBUG_MSG("RunRightPlayerState -> JumpingPlayerState");
		return new JumpingPlayerState();
	}
	else if (input.getCurrent() == Input::Action::X_PRESS) {
		DEBUG_MSG("RunRightPlayerState -> PunchingPlayerState");
		return new PunchingPlayerState();
	}
	return nullptr;
}
void RunRightPlayerState::update(Player& player) {}
void RunRightPlayerState::enter(Player& player)
{
	DEBUG_MSG("Entering RunRightPlayerState");
}
void RunRightPlayerState::exit(Player& player) 
{
	DEBUG_MSG("Exiting RunRightPlayerState");
}