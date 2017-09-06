#pragma once
#include"Scene.h"

class SceneManager
{
private:
	Scene *scene;
public:
	SceneManager();
	~SceneManager();
	void updateScene();
	void changeScene(Scene*);
};

