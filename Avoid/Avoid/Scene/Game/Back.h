#pragma once
#include "../Figure/Figure.h"
#include "../Move/Move.h"
//背景の描画のみ.当たり判定は無し。雲のみ動く
class BackGround
{
public:
	struct Sky
	{
		int handle;
		POS pos;
	}sky;
	struct Mountain
	{
		int handle;
		POS pos;
	}mountain;
	struct Cloud
	{
		int handle;
		POS pos;
		Move move;
	}cloud;
	BackGround();
	~BackGround();
	void Draw();
};