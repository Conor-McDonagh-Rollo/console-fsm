#include <iostream>
#include <SFML/Graphics.hpp>
#include <Player.h>
#include <Input.h>
#include <Debug.h>

#include <time.h>
#include <thread>
#include <chrono>

using namespace std;

int main()
{
	// Create the main window
	sf::RenderWindow window(sf::VideoMode(800, 600), "Finite State Machine");

	//Automatically Cycles Through States
	
	int count = 0;
	Input i = Input();
	Player p = Player();

	srand((unsigned int)time(NULL));
	int input = 3; // Default LEFT_PRESS

	while (true) {
		std::this_thread::sleep_for(std::chrono::seconds(3));

		switch (input) {
		case 1:
			DEBUG_MSG("Input::Action::UP_PRESS");
			i.setCurrent(Input::Action::UP_PRESS);
			break;
		case 2:
			DEBUG_MSG("Input::Action::UP_RELEASE");
			i.setCurrent(Input::Action::UP_RELEASE);
			break;
		case 3:
			DEBUG_MSG("Input::Action::LEFT_PRESS");
			i.setCurrent(Input::Action::LEFT_PRESS);
			break;
		case 4:
			DEBUG_MSG("Input::Action::LEFT_RELEASE");
			i.setCurrent(Input::Action::LEFT_RELEASE);
			break;
		case 5:
			DEBUG_MSG("Input::Action::LEFT_PRESS");
			i.setCurrent(Input::Action::RIGHT_PRESS);
			break;
		case 6:
			DEBUG_MSG("Input::Action::RIGHT_RELEASE");
			i.setCurrent(Input::Action::RIGHT_RELEASE);
			break;
		case 7:
			DEBUG_MSG("Input::Action::DOWN_PRESS");
			i.setCurrent(Input::Action::DOWN_PRESS);
			break;
		case 8:
			DEBUG_MSG("Input::Action::DOWN_RELEASE");
			i.setCurrent(Input::Action::DOWN_RELEASE);
			break;
		case 9:
			DEBUG_MSG("Input::Action::SPACE_PRESS");
			i.setCurrent(Input::Action::SPACE_PRESS);
			break;
		case 10:
			DEBUG_MSG("Input::Action::SPACE_RELEASE");
			i.setCurrent(Input::Action::SPACE_RELEASE);
			break;
		case 11:
			DEBUG_MSG("Input::Action::Z_PRESS");
			i.setCurrent(Input::Action::Z_PRESS);
			break;
		case 12:
			DEBUG_MSG("Input::Action::Z_RELEASE");
			i.setCurrent(Input::Action::Z_RELEASE);
			break;
		case 13:
			DEBUG_MSG("Input::Action::X_PRESS");
			i.setCurrent(Input::Action::X_PRESS);
			break;
		case 14:
			DEBUG_MSG("Input::Action::X_RELEASE");
			i.setCurrent(Input::Action::X_RELEASE);
			break;
		case 15:
			DEBUG_MSG("Input::Action::HIT_WALL_EVENT");
			i.setCurrent(Input::Action::HIT_WALL_EVENT);
			break;
		case 16:
			DEBUG_MSG("Input::Action::HIT_GROUND_EVENT");
			i.setCurrent(Input::Action::HIT_GROUND_EVENT);
			break;
		case 17:
			DEBUG_MSG("Input::Action::HIT_LADDER_TOP_EVENT");
			i.setCurrent(Input::Action::HIT_LADDER_TOP_EVENT);
			break;
		case 18:
			DEBUG_MSG("Input::Action::HIT_LADDER_BOTTOM_EVENT");
			i.setCurrent(Input::Action::HIT_LADDER_BOTTOM_EVENT);
			break;
		default:
			DEBUG_MSG("Input::Action::NONE");
			i.setCurrent(Input::Action::NONE);
			break;
		}
		
		input = rand() % (int)Input::Action::Count + 1;

		if (i.getCurrent() != Input::Action::NONE)
		{
			p.handleInput(i);
		}

		count++;
		p.update();
	}

	return EXIT_SUCCESS;
}