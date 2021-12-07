#include <ClimbUpPlayerState.h>

#include <ClimbDownPlayerState.h>
#include <ClimbPausePlayerState.h>
#include <LadderClimbedPlayerState.h>

PlayerState* ClimbUpPlayerState::handleInput(Input& input)
{
	if (input.getCurrent() == Input::Action::UP_RELEASE)
	{
		return new ClimbPausePlayerState();
	}
	else if (input.getCurrent() == Input::Action::DOWN_PRESS)
	{
		return new ClimbDownPlayerState();
	}
	else if (input.getCurrent() == Input::Action::HIT_LADDER_TOP_EVENT)
	{
		return new LadderClimbedPlayerState();
	}
	
	return nullptr;
}
void ClimbUpPlayerState::update(Player& player) {}
void ClimbUpPlayerState::enter(Player& player) 
{
	DEBUG_MSG("Entering ClimbUpPlayerState");
}
void ClimbUpPlayerState::exit(Player& player)
{
	DEBUG_MSG("Exiting ClimbUpPlayerState");
}