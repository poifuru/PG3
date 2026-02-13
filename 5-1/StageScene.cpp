#include "StageScene.h"

StageScene::StageScene() {

}

void StageScene::Init() {
	inputHandler_ = std::make_unique<InputHandler>();

	inputHandler_->AssignMoceRightCommand2PressKeyD();
	inputHandler_->AssignMoveLeftCommand2PressKeyA();

	player_ = std::make_unique<Player>();
}

void StageScene::Update() {
	iCommand_ = inputHandler_->HandleInput();
	
	if (iCommand_) {
		iCommand_->Exec(*player_);
	}

	player_->Update();
}

void StageScene::Draw() {
	player_->Draw();
}