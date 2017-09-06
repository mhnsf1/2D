#pragma once
#include "Scene.h"
#include"SceneManager.h"

class GameScene :
	public Scene
{
private:
	SceneManager *my_owner;
public:
	GameScene(SceneManager*);
	~GameScene();
	void update();
};

