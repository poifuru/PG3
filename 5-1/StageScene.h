#pragma once
#include <memory>
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
	std::unique_ptr<InputHandler> inputHandler_ = nullptr;
	ICommand* iCommand_ = nullptr;
	std::unique_ptr<Player> player_ = nullptr;
};