#pragma once

class IShape {
public:		//メンバ関数
	//サイズを求める
	virtual void Size() = 0;
	//描画
	virtual void Draw() = 0;
};