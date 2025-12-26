#pragma once
#include "IShape.h"
class Circle : public IShape {
public:
	//コンストラクタ
	Circle();
	//デストラクタ
	~Circle();

	//インターフェースの関数
	void Size() override;
	void Draw() override;

private:
	//半径
	float radius_;
	//面積
	float size_;
};