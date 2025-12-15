#pragma once
#include "DeathEater.h"
class Dementor : public IDeathEater {
public:
	Dementor();
	~Dementor() override;
	void Attack() override;
};