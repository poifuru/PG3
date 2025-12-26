#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include <iostream>

int main() {
	Animal* animals[2];

	//生成
	printf("生成フェーズ\n");
	for (int i = 0; i < 2; ++i) {
		if (i < 1) {
			animals[i] = new Dog();
		}
		else {
			animals[i] = new Cat();
		}
	}

	//攻撃
	printf("\n攻撃フェーズ\n");
	for (int i = 0; i < 2; ++i) {
		animals[i]->Cry();
	}

	//破棄
	printf("\n破棄フェーズ\n");
	for(int i = 0; i < 2; ++i) {
		delete animals[i];
	}

	return 0;
}