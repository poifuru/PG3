#pragma once
#include <memory>
#include "IScene.h"
#include "InputManager.h"

class StageScene : public IScene {
public:
	StageScene(InputManager* input);

	void Initialize() override;
	void Update() override;
	void Draw() override;

private:
	InputManager* input_;
};