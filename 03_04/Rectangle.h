#pragma once
#include "IShape.h"
class Rectangle : public IShape {
public:
	//コンストラクタ
	Rectangle();
	//デストラクタ
	~Rectangle();

	//インターフェースの関数
	void Size() override;
	void Draw() override;

private:
	//高さ、幅
	float height_;
	float width_;
	//面積
	float size_;
};

