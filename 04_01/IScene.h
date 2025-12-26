#pragma once

//シーン名の定義
enum SCENE {
	TITLE,
	STAGE,
	CLEAR,
};

//シーン内の処理を行う基底クラス
class IScene {
public:
	//純粋仮想関数(抽象)
	virtual void Initialize() = 0;
	virtual void Update() = 0;
	virtual void Draw() = 0;

	//仮想デストラクタを用意しないと警告される
	virtual ~IScene();

	//シーン番号のゲッター
	int GetSceneNo() { return sceneNo_; }

protected:
	//シーン番号管理用の変数
	static int sceneNo_;
};