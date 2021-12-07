#include <ClimbLadderPlayerState.h>

#include <RunRightPlayerState.h>
#include <RunLeftPlayerState.h>
#include <ClimbUpPlayerState.h>


PlayerState* ClimbLadderPlayerState::handleInput(Input& input)
{
	if (input.getCurrent() == Input::Action::UP_PRESS)
	{
		return new ClimbUpPlayerState();
	}
	else if (input.getCurrent() == Input::Action::RIGHT_PRESS)
	{
		return new RunRightPlayerState();
	}
	else if (input.getCurrent() == Input::Action::LEFT_PRESS)
	{
		return new RunLeftPlayerState();
	}
	return nullptr;
}
void ClimbLadderPlayerState::update(Player& player) 
{
	player;
}
void ClimbLadderPlayerState::enter(Player& player)
{
	DEBUG_MSG("Entering ClimbLadderPlayerState");
	player;
}
void ClimbLadderPlayerState::exit(Player& player) 
{
	DEBUG_MSG("Exiting ClimbLadderPlayerState");
	player;
}