#pragma once
#include"Object.h"

class Level
{
private:
	std::shared_ptr<Object> object;
public:
	Level();
	~Level();
	void update();
};

