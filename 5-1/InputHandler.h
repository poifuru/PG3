#pragma once
#include <memory>
#include "Command.h"

class InputHandler {
public:
	InputHandler();
	ICommand* HandleInput();

	void AssignMoveLeftCommand2PressKeyA();
	void AssignMoceRightCommand2PressKeyD();

private:
	std::unique_ptr<ICommand> pressKeyD_ = nullptr;
	std::unique_ptr<ICommand> pressKeyA_ = nullptr;

	//コマンド
	std::unique_ptr<MoveLeftCommand> moveLeft_ = nullptr;
	std::unique_ptr<MoveRightCommand> moveRight_ = nullptr;
};

