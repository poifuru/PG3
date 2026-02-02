#include "Player.h"
#include "Novice.h"
#include "StageScene.h"

Player::Player() {

}

void Player::Update() {

}

void Player::Draw() {
	Novice::DrawEllipse(int(pos_.x), int(pos_.y), 10, 10, 0.0f, WHITE, kFillModeSolid);
}

void Player::MoveRight() {
	pos_.x += speed_;
}

void Player::MoveLeft() {
	pos_.y -= speed_;
}
