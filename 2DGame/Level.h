#pragma once
#include"Object.h"

class Level
{
private:
	Object *object;
public:
	Level();
	~Level();
	void update();
};

