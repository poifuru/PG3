#pragma once

class IDeathEater {
public:		//メンバ関数
	//コンストラクタ
	IDeathEater();
	//デストラクタ
	virtual ~IDeathEater() = 0;
	//攻撃
	virtual void Attack() = 0;
protected:	//メンバ変数
	//名前
	const char* name_;
};