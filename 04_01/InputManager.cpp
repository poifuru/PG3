#include "InputManager.h"
#include <Novice.h>

InputManager::InputManager() {
}

void InputManager::Update() {
	// キー入力を受け取る
	memcpy(preKeys, keys, 256);
	Novice::GetHitKeyStateAll(keys);
}

bool InputManager::Push(int keycode) {
	if (keys[keycode]) {
		return true;
	}

	return false;
}

bool InputManager::Trriger(int keycode) {
	if (keys[keycode] && !preKeys[keycode]) {
		return true;
	}

	return false;
}

bool InputManager::Release(int keycode) {
	if (!keys[keycode] && preKeys[keycode]) {
		return true;
	}

	return false;
}