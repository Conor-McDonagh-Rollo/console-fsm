#include <stdio.h>
#include <Player.h>
#include <IdlePlayerState.h>

Player::Player() {
	m_state = new IdlePlayerState();
}

void Player::handleInput(Input input) {
	PlayerState * state = m_state->handleInput(input);

	if (state != NULL) {
		m_state->exit(*this);
		delete m_state;
		m_state = state;
		m_state->enter(*this);
	}
}

void Player::update() {
	m_state->update(*this);
}

void Player::getStatus() {
	DEBUG_MSG("Player Status");
}
