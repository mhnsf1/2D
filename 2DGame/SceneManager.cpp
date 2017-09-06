#include "SceneManager.h"
#include"TitleScene.h"
#include"GameScene.h"
#include"ResultScene.h"


SceneManager::SceneManager()
{
	changeScene(new TitleScene(this));
}

SceneManager::~SceneManager()
{
}

void SceneManager::updateScene() {
	scene->update();
}

void SceneManager::changeScene(Scene *new_scene) {
	delete scene;
	scene = new_scene;
}
