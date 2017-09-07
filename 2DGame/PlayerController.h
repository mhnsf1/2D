#pragma once
#include "AgentController.h"
class PlayerController :
	public AgentController
{
public:
	PlayerController();
	~PlayerController();
	void update();
};

