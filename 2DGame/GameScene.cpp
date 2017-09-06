#include "GameScene.h"
#include"ResultScene.h"


GameScene::GameScene(SceneManager *owner)
{
	my_owner = owner;
}


GameScene::~GameScene()
{
}

void GameScene::update() {
	FontAsset(L"debug")(L"game").drawCenter(320, 240);
	if (Input::Key1.clicked) my_owner->changeScene(new ResultScene(my_owner));
}