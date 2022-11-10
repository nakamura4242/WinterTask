//-----------------------------------------------------------------------------
// @brief  メイン処理.
// 2016 Takeru Yui All Rights Reserved.
//-----------------------------------------------------------------------------
// インクルード
#include "DxLib.h"
#define SPEED_X 5;
#define SPEED_Y 16;

//-----------------------------------------------------------------------------
// @brief  メイン関数.
//-----------------------------------------------------------------------------
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) 
{
	// ＤＸライブラリ初期化処理
	if (DxLib_Init() == -1)		
	{
		return -1;	// エラーが起きたら直ちに終了
	}

	// 画面モードのセット
	SetGraphMode(640, 480, 16);
	ChangeWindowMode(TRUE);

	int honoo = LoadGraph("data/assets/ボール32.png");
	int hi_x = 0;
	int hi_y = 448;
	int count = 0;


	// エスケープキーが押されるかウインドウが閉じられるまでループ
	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		hi_x++;
		hi_y--;

		// 画面を初期化する
		ClearDrawScreen();

		DrawGraph(hi_x, hi_y, honoo, TRUE);

		// 裏画面の内容を表画面に反映させる
		ScreenFlip();
	}


	// ＤＸライブラリの後始末
	DxLib_End();

	// ソフトの終了
	return 0;
}