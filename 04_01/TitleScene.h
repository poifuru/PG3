#pragma once
#include <memory>
#include "IScene.h"
#include "InputManager.h"

class TitleScene : public IScene {
public:
	TitleScene(InputManager* input);

	void Initialize() override;
	void Update() override;
	void Draw() override;

private:
	InputManager* input_;
};