#pragma once
#include "Scene.h"
#include"SceneManager.h"
#include"Level.h"

class GameScene :
	public Scene
{
private:
	SceneManager *my_owner;
	Level *level;
public:
	GameScene(SceneManager*);
	~GameScene();
	void update();
};

