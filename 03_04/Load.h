#pragma once
#include "DeathEater.h"
class Load : public IDeathEater {
public:
	Load();
	~Load() override;
	void Attack() override;
};

