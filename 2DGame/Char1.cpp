#include "stdafx.h"
#include "Char1.h"
#include"Char1Action.h"

Char1::Char1(std::shared_ptr<AgentController> _my_controller) : Agent(_my_controller)
{
	object->pos = Point(100, 100);
	object->size = Point(100, 100);
	action = std::make_unique<Char1Action>(object);
}


Char1::~Char1()
{
}

void Char1::update() {
	my_controller->update();
	action->update(my_controller->getInputs());
	object->texture.drawAt(object->pos);
}