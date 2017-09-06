
#include"SceneManager.h"

void Main()
{
	
	FontAsset::Register(L"debug", 14);
	SceneManager scene_manager;

	while (System::Update())
	{
		scene_manager.updateScene();
	}
}
