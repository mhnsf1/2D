#pragma once
#include"Object.h"
#include"Agent.h"

class Player
{
private:
	std::shared_ptr<Agent> agent;

public:
	Player();
	~Player();
	void update();
};

