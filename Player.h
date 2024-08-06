#pragma once
#include<Model.h>
#include<WorldTransform.h>

class Player {

public:
	/// 初期化
	void Initialize(Model*model,uint32_t textureHandle);

	/// 更新
	void Update();

	// 描画
	void Draw(ViewProjection& viewProjection);

private:
	//ワールド返還データ
	WorldTransform worldTransform_;
	//モデル
	Model* model_ = nullptr;
	//テクスチャハンドル
	uint32_t textureHandle_ = 0u;

};
