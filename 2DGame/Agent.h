#pragma once
#include"AgentController.h"
#include"Object.h"
#include"CharAction.h"


class Agent
{
protected:
	std::shared_ptr<AgentController> my_controller;
	std::shared_ptr<Object> object;
	std::unique_ptr<CharAction> action;
public:
	Agent(std::shared_ptr<AgentController>);
	~Agent();
	virtual void update() = 0;
	
};

