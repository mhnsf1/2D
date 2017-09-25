#include "stdafx.h"
#include "Player.h"
#include"PlayerController.h"
#include"CharactersHeader.h"

Player::Player()
{
	agent = std::make_shared<Char1>(std::make_shared<PlayerController>());
}

Player::~Player()
{
}

void Player::update() {
	agent->update();
}