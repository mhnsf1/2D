#include "stdafx.h"
#include "Agent.h"


Agent::Agent(std::shared_ptr<AgentController> _my_controller) : my_controller(_my_controller)
{
	object = std::make_shared<Object>();
}


Agent::~Agent()
{
}
