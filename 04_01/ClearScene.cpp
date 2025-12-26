#include "ClearScene.h"
#include <Novice.h>

ClearScene::ClearScene(InputManager* input) {
	input_ = input;
}

void ClearScene::Initialize() {
	
}

void ClearScene::Update() {
	if (input_->Trriger(DIK_SPACE)) {
		sceneNo_ = TITLE;
	}
}

void ClearScene::Draw() {
	Novice::ScreenPrintf(10, 20, "Clear");
}