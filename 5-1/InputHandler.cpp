#include "InputHandler.h"
#include "Novice.h"

InputHandler::InputHandler() {
	moveLeft_ = std::make_unique<MoveLeftCommand>();
	moveRight_ = std::make_unique<MoveRightCommand>();
}

ICommand* InputHandler::HandleInput() {
	if (Novice::CheckHitKey(DIK_D)) {
		return pressKeyD_.get();
	}
	if (Novice::CheckHitKey(DIK_A)) {
		return pressKeyA_.get();
	}
	return nullptr;
}

void InputHandler::AssignMoveLeftCommand2PressKeyA() {
	pressKeyA_ = std::move(moveLeft_);
}

void InputHandler::AssignMoceRightCommand2PressKeyD() {
	pressKeyD_ = std::move(moveRight_);
}
