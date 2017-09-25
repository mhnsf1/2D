#include "GameScene.h"
#include"ResultScene.h"


GameScene::GameScene(SceneManager *owner)
{
	my_owner = owner;
	level = new Level();
	player1 = std::make_shared<Player>();
}


GameScene::~GameScene()
{
	delete level;
}

void GameScene::update() {
	level->update();
	player1->update();
	FontAsset(L"debug")(L"game").drawCenter(320, 240);
	if (Input::Key1.clicked) my_owner->changeScene(new ResultScene(my_owner));
}