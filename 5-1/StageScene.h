#pragma once
#include "Player.h"
#include "Command.h"
#include "InputHandler.h"

class StageScene {
public:
	StageScene();

	void Init();
	void Update();
	void Draw();

private:
	InputHandler* inputHandler_ = nullptr;
	ICommand* iCommand_ = nullptr;
	Player* player_;
};