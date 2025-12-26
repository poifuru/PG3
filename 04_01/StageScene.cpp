#include "StageScene.h"
#include <Novice.h>

StageScene::StageScene(InputManager* input) {
	input_ = input;
}

void StageScene::Initialize() {
	
}

void StageScene::Update() {
	if (input_->Trriger(DIK_SPACE)) {
		sceneNo_ = CLEAR;
	}
}

void StageScene::Draw() {
	Novice::DrawBox(630, 500, 20, 20, 0.0f, WHITE, kFillModeSolid);
	Novice::DrawBox(630, 100, 20, 20, 0.0f, RED, kFillModeSolid);

	Novice::ScreenPrintf(10, 20, "Stage");
}