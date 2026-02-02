#pragma once

struct Vector2 {
	float x;
	float y;
	float z;
};

class Player {
public:
	Player();
	
	void Init();
	void Update();
	void Draw();

	void MoveRight();
	void MoveLeft();

private:
	Vector2 pos_ = {100.0f, 300.0f};
	float speed_ = 2.0f;
};