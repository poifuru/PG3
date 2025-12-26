#pragma once
#include <memory>
#include "IScene.h"
#include "TitleScene.h"
#include "StageScene.h"
#include "ClearScene.h"
#include "inputManager.h"

class GameManager {
public:
	//コンストラクタ
	GameManager();
	//デストラクタ
	~GameManager();

	//ゲームループ呼び出し用
	int Run();

private:
	//インプットマネージャー
	std::unique_ptr<InputManager> input_;

	//シーンを保持する変数
	std::unique_ptr<IScene> sceneArr_[3];

	//どのステージを呼び出すかを管理する変数
	int currentSceneNo_;
	int prevSceneNo_;
};