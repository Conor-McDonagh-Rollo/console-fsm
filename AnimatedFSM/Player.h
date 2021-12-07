#ifndef PLAYER_H
#define PLAYER_H
#include <Debug.h>
#include <Input.h>
#include <PlayerState.h>
#include <SFML/Graphics.hpp>

class Player
{
private:
	PlayerState * m_state;
public:
	Player();
	virtual void handleInput(Input);
	virtual void update();
	void getStatus();
};
#endif

