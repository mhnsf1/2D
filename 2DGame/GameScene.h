#pragma once
#include "Scene.h"
#include"SceneManager.h"
#include"Level.h"
#include"Player.h"

class GameScene :
	public Scene
{
private:
	SceneManager *my_owner;
	Level *level;
	std::shared_ptr<Player> player1;
public:
	GameScene(SceneManager*);
	~GameScene();
	void update();
};

