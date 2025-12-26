#pragma once
class InputManager {
public:
	InputManager();

	void Update();

	bool Push(int keycode);
	bool Trriger(int keycode);
	bool Release(int keycode);

private:
	// キー入力結果を受け取る箱
	char keys[256] = { 0 };
	char preKeys[256] = { 0 };
};