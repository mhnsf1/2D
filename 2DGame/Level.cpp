#include "stdafx.h"
#include "Level.h"


Level::Level()
{
	object = new Object(Point(100, 100), Point(100, 100));
}


Level::~Level()
{
}

void Level::update() {
	object->texture.drawAt(object->pos);
}