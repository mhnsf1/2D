#include "stdafx.h"
#include "PlayerController.h"


PlayerController::PlayerController()
{
}


PlayerController::~PlayerController()
{
}

void PlayerController::update() {
	resetInputs();
	if (Input::KeyD.pressed) inputs.right = true;
	if (Input::KeyA.pressed) inputs.left = true;
}
