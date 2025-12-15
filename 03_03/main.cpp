#include "DeathEater.h"
#include "Dementor.h"
#include "Load.h"
#include <iostream>

int main() {
	DeathEater* death_eaters[3];

	//生成
	printf("生成フェーズ\n");
	for (int i = 0; i < 3; ++i) {
		if (i < 1) {
			death_eaters[i] = new Dementor();
		}
		else {
			death_eaters[i] = new Load();
		}
	}

	//攻撃
	printf("\n攻撃フェーズ\n");
	for (int i = 0; i < 3; ++i) {
		death_eaters[i]->Attack();
	}

	//破棄
	printf("\n破棄フェーズ\n");
	for (int i = 0; i < 3; ++i) {
		delete death_eaters[i];
	}

	return 0;
}