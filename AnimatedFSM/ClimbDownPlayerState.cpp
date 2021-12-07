#include <ClimbDownPlayerState.h>

#include <ClimbPausePlayerState.h>
#include <ClimbLadderPlayerState.h>

PlayerState* ClimbDownPlayerState::handleInput(Input& input)
{
	if (input.getCurrent() == Input::Action::DOWN_RELEASE)
	{
		DEBUG_MSG("ClimbDownPlayerState -> ClimbPausePlayerState");
		return new ClimbPausePlayerState();
	}
	else if (input.getCurrent() == Input::Action::HIT_GROUND_EVENT)
	{
		DEBUG_MSG("ClimbDownPlayerState -> ClimbLadderPlayerState");
		return new ClimbLadderPlayerState();
	}
	return nullptr;
}
void ClimbDownPlayerState::update(Player& player) {}
void ClimbDownPlayerState::enter(Player& player)
{
	DEBUG_MSG("Entering ClimbDownPlayerState");
	player;
}
void ClimbDownPlayerState::exit(Player& player) 
{
	DEBUG_MSG("Exiting ClimbDownPlayerState");
	player;
}