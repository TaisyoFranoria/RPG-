#include<Dxlib.h>
#include<iostream>
#include"System.hpp"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int CmdShow) {
	SetMainWindowText("RPG?");
	SetGraphMode(1280, 720, 32);
	ChangeWindowMode(TRUE);
	if (DxLib_Init() == -1)return -1;
	SetDrawScreen(DX_SCREEN_BACK);

	System* MainSystem =new System();

	while (ProcessMessage() != -1 && !ScreenFlip() && !ClearDrawScreen()) {
		MainSystem->ALL();
		if(!MainSystem->getAlive())break;
	}

	MessageBox(NULL, TEXT("プログラムが終了しました。"), TEXT("ゲームの終了"), MB_OK);

	delete MainSystem;

	DxLib_End();

	return 0;
}