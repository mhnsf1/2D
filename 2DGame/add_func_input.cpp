#include"add_func_input.h"
bool AddFuncInput::isRight(type type, gamepad gamepad) {
	bool flag = false;
	switch (type)
	{
	case INPUT_CLICKED:
		if ((Input::KeyD.clicked && gamepad == GAMEPAD0) || Gamepad(gamepad).povRight.clicked) flag = true;
		break;
	case INPUT_PRESSED:
		if ((Input::KeyD.pressed && gamepad == GAMEPAD0) || Gamepad(gamepad).povRight.pressed) flag = true;
		break;
	case INPUT_RELEASED:
		if ((Input::KeyD.released && gamepad == GAMEPAD0) || Gamepad(gamepad).povRight.released) flag = true;
		break;
	default: 
		break;
	}
	return flag;
}
bool AddFuncInput::isLeft(type type, gamepad gamepad) {
	bool flag = false;
	switch (type)
	{
	case INPUT_CLICKED:
		if ((Input::KeyA.clicked && gamepad == GAMEPAD0) || Gamepad(gamepad).povLeft.clicked) flag = true;
		break;
	case INPUT_PRESSED:
		if ((Input::KeyA.pressed && gamepad == GAMEPAD0) || Gamepad(gamepad).povLeft.pressed) flag = true;
		break;
	case INPUT_RELEASED:
		if ((Input::KeyA.released && gamepad == GAMEPAD0) || Gamepad(gamepad).povLeft.released) flag = true;
		break;
	default:
		break;
	}
	return flag;
}
bool AddFuncInput::isAttack(type type, gamepad gamepad) {
	bool flag = false;
	switch (type)
	{
	case INPUT_CLICKED:
		if ((Input::KeyK.clicked && gamepad == GAMEPAD0) || Gamepad(gamepad).button((int)BUTTON_ATTACK).clicked) flag = true;
		break;
	case INPUT_PRESSED:
		if ((Input::KeyK.pressed && gamepad == GAMEPAD0) || Gamepad(gamepad).button((int)BUTTON_ATTACK).pressed) flag = true;
		break;
	case INPUT_RELEASED:
		if ((Input::KeyK.released && gamepad == GAMEPAD0) || Gamepad(gamepad).button((int)BUTTON_ATTACK).released) flag = true;
		break;
	default:
		break;
	}
	return flag;
}
bool AddFuncInput::isBlock(type type, gamepad gamepad) {
	bool flag = false;
	switch (type)
	{
	case INPUT_CLICKED:
		if ((Input::KeySemicolon.clicked && gamepad == GAMEPAD0) || Gamepad(gamepad).button((int)BUTTON_BLOCK).clicked) flag = true;
		break;
	case INPUT_PRESSED:
		if ((Input::KeySemicolon.pressed && gamepad == GAMEPAD0) || Gamepad(gamepad).button((int)BUTTON_BLOCK).pressed) flag = true;
		break;
	case INPUT_RELEASED:
		if ((Input::KeySemicolon.released && gamepad == GAMEPAD0) || Gamepad(gamepad).button((int)BUTTON_BLOCK).released) flag = true;
		break;
	default:
		break;
	}
	return flag;
}
bool AddFuncInput::isJump(type type, gamepad gamepad) {
	bool flag = false;
	switch (type)
	{
	case INPUT_CLICKED:
		if ((Input::KeySpace.clicked && gamepad == GAMEPAD0) || Gamepad(gamepad).button((int)BUTTON_JUMP).clicked) flag = true;
		break;
	case INPUT_PRESSED:
		if ((Input::KeySpace.pressed && gamepad == GAMEPAD0) || Gamepad(gamepad).button((int)BUTTON_JUMP).pressed) flag = true;
		break;
	case INPUT_RELEASED:
		if ((Input::KeySpace.released && gamepad == GAMEPAD0) || Gamepad(gamepad).button((int)BUTTON_JUMP).released) flag = true;
		break;
	default:
		break;
	}
	return flag;
}
bool AddFuncInput::isButtons(buttons button, type type, gamepad gamepad) {
	switch (button)
	{
	case BUTTON_RIGHT: return isRight(type, gamepad);
	case BUTTON_LEFT: return isLeft(type, gamepad);
	case BUTTON_JUMP: return isJump(type, gamepad);
	case BUTTON_BLOCK: return isBlock(type, gamepad);
	case BUTTON_ATTACK: return isAttack(type, gamepad);
	default: assert(false);
	}
}

ComInput::ComInput(InputFlags *input_flags_) {
	input_flags = input_flags_;
	for (int i = 0; i < BUTTON_SIZE; i++) click_flag[i] = false;
}
void ComInput::initInput() {
	if (!input_flags->pressed_right) click_flag[BUTTON_RIGHT] = false;
	if (!input_flags->pressed_left) click_flag[BUTTON_LEFT] = false;
	if (!input_flags->pressed_jump) click_flag[BUTTON_JUMP] = false;
	if (!input_flags->pressed_block) click_flag[BUTTON_BLOCK] = false;
	if (!input_flags->pressed_attack) click_flag[BUTTON_ATTACK] = false;
	input_flags->pressed_right = false;
	input_flags->pressed_left = false;
	input_flags->pressed_jump = false;
	input_flags->pressed_block = false;
	input_flags->pressed_attack = false;
	input_flags->clicked_right = false;
	input_flags->clicked_left = false;
	input_flags->clicked_jump = false;
	input_flags->clicked_block = false;
	input_flags->clicked_attack = false;
}
void ComInput::right() {
	input_flags->pressed_right = true;
	if (!click_flag[BUTTON_RIGHT]) input_flags->clicked_right = true;
}
void ComInput::left() {
	input_flags->pressed_left = true;
	if (!click_flag[BUTTON_LEFT]) input_flags->clicked_left = true;
}
void ComInput::jump() {
	input_flags->pressed_jump = true;
	if (!click_flag[BUTTON_JUMP]) input_flags->clicked_jump = true;
}
void ComInput::block() {
	input_flags->pressed_block = true;
	if (!click_flag[BUTTON_BLOCK]) input_flags->clicked_block = true;
}
void ComInput::attack() {
	input_flags->pressed_attack = true;
	if (!click_flag[BUTTON_ATTACK]) input_flags->clicked_attack = true;
}