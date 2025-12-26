#include "IShape.h"
#include "Circle.h"
#include "Rectangle.h"
#include <iostream>

int main() {
	IShape* shapes[2];

	//生成
	for (int i = 0; i < 2; ++i) {
		if (i < 1) {
			shapes[i] = new Circle();
		}
		else {
			shapes[i] = new Rectangle();
		}
	}

	//面積計算
	for (int i = 0; i < 2; ++i) {
		shapes[i]->Size();
	}

	//描画
	for (int i = 0; i < 2; ++i) {
		shapes[i]->Draw();
	}

	//破棄
	for (int i = 0; i < 2; ++i) {
		delete shapes[i];
	}

	return 0;
}