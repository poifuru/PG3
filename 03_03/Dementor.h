#pragma once
#include "DeathEater.h"

class Dementor : public DeathEater {
public:
	Dementor();
	~Dementor() override;
	void Attack() override;
};

