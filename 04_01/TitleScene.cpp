#include "TitleScene.h"
#include <Novice.h>

TitleScene::TitleScene(InputManager* input) {
	input_ = input;
}

void TitleScene::Initialize() {
	
}

void TitleScene::Update() {
	if (input_->Trriger(DIK_SPACE)) {
		sceneNo_ = STAGE;
	}
}

void TitleScene::Draw() {
	Novice::ScreenPrintf(10, 20, "Title");
}