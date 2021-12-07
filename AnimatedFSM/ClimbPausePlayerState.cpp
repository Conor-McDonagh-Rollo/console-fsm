#include <ClimbPausePlayerState.h>

#include <ClimbDownPlayerState.h>
#include <ClimbUpPlayerState.h>


PlayerState* ClimbPausePlayerState::handleInput(Input& input)
{
	if (input.getCurrent() == Input::Action::DOWN_PRESS)
	{
		return new ClimbDownPlayerState();
	}
	else if (input.getCurrent() == Input::Action::UP_PRESS)
	{
		return new ClimbUpPlayerState();
	}
	return nullptr;
}
void ClimbPausePlayerState::update(Player& player) 
{
	player;
}
void ClimbPausePlayerState::enter(Player& player)
{
	DEBUG_MSG("Entering ClimbPausePlayerState");
	player;
}
void ClimbPausePlayerState::exit(Player& player) 
{
	DEBUG_MSG("Exiting ClimbPausePlayerState");
	player;
}