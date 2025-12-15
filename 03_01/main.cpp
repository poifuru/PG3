#include <stdio.h>
#include <memory>
#include "Enemy.h"

int main() {
	std::unique_ptr<Enemy> enemy = std::make_unique<Enemy>();

	for (uint32_t i = 0; i < 3; ++i) {
		printf("---フレーム : %d---\n", i);
		enemy->Update();
	}

	return 0;
}