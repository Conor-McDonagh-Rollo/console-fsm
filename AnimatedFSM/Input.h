#ifndef INPUT_H
#define INPUT_H

class Input
{
public:
	Input();
	~Input();

	enum class Action
	{
		NONE,
		UP_PRESS,
		UP_RELEASE,
		LEFT_PRESS,
		LEFT_RELEASE,
		RIGHT_PRESS,
		RIGHT_RELEASE,
		DOWN_PRESS,
		DOWN_RELEASE,
		SPACE_PRESS,
		SPACE_RELEASE,
		Z_PRESS,
		Z_RELEASE,
		X_PRESS,
		X_RELEASE,
		HIT_WALL_EVENT,
		HIT_GROUND_EVENT,
		HIT_LADDER_TOP_EVENT,
		HIT_LADDER_BOTTOM_EVENT,
		Count
	};

	void setCurrent(Action);
	Action getCurrent();

private:
	Action m_current;
};

#endif
