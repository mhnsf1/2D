#include "stdafx.h"
#include "Char1Action.h"


Char1Action::Char1Action(std::shared_ptr<Object> _object) : CharAction(_object)
{
}


Char1Action::~Char1Action()
{
}

void Char1Action::update(Inputs inputs) {
	if (inputs.right) object->pos.x += 5;
	else if (inputs.left) object->pos.x -= 5;
}
