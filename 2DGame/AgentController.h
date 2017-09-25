#pragma once

struct Inputs {
	bool up, down, right, left;
};


class AgentController
{
protected:
	Inputs inputs;
	void resetInputs();
public:
	AgentController();
	~AgentController();
	virtual void update() = 0;
	const Inputs& getInputs();
};

