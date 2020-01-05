/**
 * External Libraries
 *
 */
#include "DxLib.h"

/**
 * headers
 *
 */
#include "App.h"
#include "AppController.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	// If DxLib not found, then close application.
	if (DxLib_Init() < 0) {
		return -1;
	}

	// Todo: Load Data handler
	AppController app;
	int flag = app.checkAppConf();
	
	// Application Name
	if (flag == 0)
		SetMainWindowText("ROAD TO SOYSAUCE");
	else
		SetMainWindowText("No Data Found.");

	// Set Initial Configuration
	SetGraphMode(800, 600, 32);
	ChangeWindowMode(TRUE);
	SetDrawScreen(DX_SCREEN_BACK);

	while (!ScreenFlip() && !ProcessMessage() && !ClearDrawScreen())
	{
		if (CheckHitKey(KEY_INPUT_Z) == 1)
			break;
	}
	
	DxLib_End();

	return 0;

}