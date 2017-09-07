#pragma once
#include "AgentController.h"
class AgentAI :
	public AgentController
{
public:
	AgentAI();
	~AgentAI();
	void update();
};

