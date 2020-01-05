#pragma once

#include "DxLib.h"
#include "App.h"

class AppController
{
	App app;

public:
	
	AppController(void);
	
	~AppController(void);

	int checkAppConf(void);

};