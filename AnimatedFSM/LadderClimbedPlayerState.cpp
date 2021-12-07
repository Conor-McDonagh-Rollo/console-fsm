#include <LadderClimbedPlayerState.h>

#include <ClimbDownPlayerState.h>
#include <RunLeftPlayerState.h>
#include <RunRightPlayerState.h>

PlayerState* LadderClimbedPlayerState::handleInput(Input& input)
{
	if (input.getCurrent() == Input::Action::DOWN_PRESS)
	{
		return new ClimbDownPlayerState();
	}
	else if (input.getCurrent() == Input::Action::LEFT_PRESS)
	{
		return new RunLeftPlayerState();
	}
	else if (input.getCurrent() == Input::Action::RIGHT_PRESS)
	{
		return new RunRightPlayerState();
	}
	return nullptr;
}
void LadderClimbedPlayerState::update(Player& player) {}
void LadderClimbedPlayerState::enter(Player& player) 
{
	DEBUG_MSG("Entering LadderClimbedPlayerState");
}
void LadderClimbedPlayerState::exit(Player& player)
{
	DEBUG_MSG("Exiting LadderClimbedPlayerState");
}