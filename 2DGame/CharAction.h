#pragma once
#include"Object.h"
#include"AgentController.h"

class CharAction
{
protected:
	std::shared_ptr<Object> object;
public:
	CharAction(std::shared_ptr<Object>);
	~CharAction();
	virtual void update(Inputs) = 0;
};

