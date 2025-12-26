#pragma once

class Animal {
public:		//メンバ関数
	//コンストラクタ
	Animal();
	//デストラクタ
	virtual ~Animal();
	//鳴く
	virtual void Cry();
protected:	//メンバ変数
	//名前
	const char* name_;
};