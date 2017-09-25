#pragma once
#include "CharAction.h"
class Char1Action :
	public CharAction
{
public:
	Char1Action(std::shared_ptr<Object>);
	~Char1Action();
	void update(Inputs);
};

