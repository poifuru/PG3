#pragma once

class Enemy {
public:
	enum State {
		approach,
		shooting,
		withDrawal
	};

	Enemy();
	~Enemy();

	void Update();

	void ChangeState(State stateIndex);

private:
	void Approach();
	void Shooting();
	void Withdrawal();

	static void (Enemy::* funcTable[])();
	State state_ = State::approach;
};