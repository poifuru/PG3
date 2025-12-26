#include "GameManager.h"
#include <Novice.h>

GameManager::GameManager() {
	input_ = std::make_unique<InputManager>();
	sceneArr_[TITLE] = std::make_unique<TitleScene>(input_.get());
	sceneArr_[STAGE] = std::make_unique<StageScene>(input_.get());
	sceneArr_[CLEAR] = std::make_unique<ClearScene>(input_.get());

	//初期シーンを設定
	currentSceneNo_ = TITLE;
}

GameManager::~GameManager() {
}

int GameManager::Run() {
	// ウィンドウの×ボタンが押されるまでループ
	while (Novice::ProcessMessage() == 0) {
		// フレームの開始
		Novice::BeginFrame();

		input_->Update();

		//シーンのチェック
		prevSceneNo_ = currentSceneNo_;
		currentSceneNo_ = sceneArr_[currentSceneNo_]->GetSceneNo();

		//シーン変異チェック
		if (prevSceneNo_ != currentSceneNo_) {
			sceneArr_[currentSceneNo_]->Initialize();
		}

		//更新処理
		sceneArr_[currentSceneNo_]->Update();

		//描画処理
		sceneArr_[currentSceneNo_]->Draw();

		// フレームの終了
		Novice::EndFrame();

		// ESCキーが押されたらループを抜ける
		if (input_->Trriger(DIK_ESCAPE)) {
			break;
		}
	}
	return 0;
}
