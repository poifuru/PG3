#pragma once
#include <memory>
#include "IScene.h"
#include "InputManager.h"

class ClearScene : public IScene {
public:
	ClearScene(InputManager* input);

	void Initialize() override;
	void Update() override;
	void Draw() override;

private:
	InputManager* input_;
};