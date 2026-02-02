#pragma once
#include "Command.h"

class InputHandler {
public:
	ICommand* HandleInput();

	void AssignMoveLeftCommand2PressKeyA();
	void AssignMoceRightCommand2PressKeyD();

private:
	ICommand* pressKeyD_;
	ICommand* pressKeyA_;
};

