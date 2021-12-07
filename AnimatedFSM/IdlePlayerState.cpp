#include <IdlePlayerState.h>

#include <RunRightPlayerState.h>
#include <RunLeftPlayerState.h>

#include <JumpingPlayerState.h>
#include <PunchingPlayerState.h>

PlayerState* IdlePlayerState::handleInput(Input& input) {
	if (input.getCurrent() == Input::Action::LEFT_PRESS) {
		DEBUG_MSG("IdlePlayerState -> RunLeftPlayerState");
		return new RunLeftPlayerState();
	}
	else if (input.getCurrent() == Input::Action::RIGHT_PRESS) {
		DEBUG_MSG("IdlePlayerState -> RunRightPlayerState");
		return new RunRightPlayerState();
	}
	else if (input.getCurrent() == Input::Action::SPACE_PRESS) {
		DEBUG_MSG("IdlePlayerState -> JumpingPlayerState");
		return new JumpingPlayerState();
	}
	else if (input.getCurrent() == Input::Action::X_PRESS) {
		DEBUG_MSG("IdlePlayerState -> PunchingPlayerState");
		return new PunchingPlayerState();
	}
	return nullptr;
}

void IdlePlayerState::update(Player& player) {}

void IdlePlayerState::enter(Player& player) 
{
	DEBUG_MSG("Entering IdlePlayerState");
}

void IdlePlayerState::exit(Player& player)
{
	DEBUG_MSG("Exiting IdlePlayerState");
}