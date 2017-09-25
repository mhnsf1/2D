#include "stdafx.h"
#include "Level.h"


Level::Level()
{
	object = std::make_shared<Object>();
	object->pos = Point(300,100);
}


Level::~Level()
{
}

void Level::update() {
	object->texture.drawAt(object->pos);
}