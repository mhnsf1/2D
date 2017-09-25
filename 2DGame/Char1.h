#pragma once
#include "Agent.h"

class Char1 :
	public Agent
{
public:
	Char1(std::shared_ptr<AgentController>);
	~Char1();
	void update();
};

