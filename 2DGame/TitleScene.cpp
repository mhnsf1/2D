#include "TitleScene.h"
#include"GameScene.h"


TitleScene::TitleScene(SceneManager *owner)
{
	my_owner = owner;
}


TitleScene::~TitleScene()
{
}

void TitleScene::update() {
	FontAsset(L"debug")(L"title").drawCenter(320,240);
	if (Input::Key1.clicked) my_owner->changeScene(new GameScene(my_owner));
}