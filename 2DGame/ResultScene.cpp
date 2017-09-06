#include "ResultScene.h"
#include"TitleScene.h"


ResultScene::ResultScene(SceneManager *owner)
{
	my_owner = owner;
}


ResultScene::~ResultScene()
{
}

void ResultScene::update() {
	FontAsset(L"debug")(L"result").drawCenter(320, 240);
	if (Input::Key1.clicked) my_owner->changeScene(new TitleScene(my_owner));
}