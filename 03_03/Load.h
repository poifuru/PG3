#pragma once
#include "DeathEater.h"

class Load : public DeathEater {
public:
	Load();
	~Load() override;
	void Attack() override;
};

