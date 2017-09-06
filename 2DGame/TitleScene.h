#pragma once
#include "Scene.h"
#include"SceneManager.h"

class TitleScene :
	public Scene
{
private:
	SceneManager *my_owner;
public:
	TitleScene(SceneManager*);
	~TitleScene();
	void update();
};

