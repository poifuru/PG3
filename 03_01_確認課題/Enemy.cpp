#include "Enemy.h"
#include <stdio.h>

void(Enemy::* Enemy::funcTable[])() = {
	&Enemy::Approach,
	&Enemy::Shooting,
	&Enemy::Withdrawal,
};

Enemy::Enemy() {
	state_ = State::approach;
}

Enemy::~Enemy() {

}

void Enemy::Update() {
	(this->*funcTable[static_cast<size_t>(state_)])();
}

void Enemy::ChangeState(State stateIndex) {
	if(stateIndex < 3 && stateIndex >= 0) {
		state_ = stateIndex;
	}
}

void Enemy::Approach() {
	printf("接近\n");
	ChangeState(State::shooting);
}

void Enemy::Shooting() {
	printf("射撃\n");
	ChangeState(State::withDrawal);
}

void Enemy::Withdrawal() {
	printf("離脱\n");
}