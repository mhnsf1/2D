#pragma once
#include "Scene.h"
#include"SceneManager.h"

class ResultScene :
	public Scene
{
private:

	SceneManager *my_owner;
public:
	ResultScene(SceneManager*);
	~ResultScene();
	void update();
};

