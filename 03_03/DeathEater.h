#pragma once

class DeathEater {
public:		//メンバ関数
	//コンストラクタ
	DeathEater();
	//デストラクタ
	virtual ~DeathEater();
	//攻撃
	virtual void Attack();
protected:	//メンバ変数
	//名前
	const char* name_;
};