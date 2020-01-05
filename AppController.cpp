#include "AppController.h"

/**
 * AppController Constructor.
 *
 */
AppController::AppController(void)
{
	// Nothing to do.
}

/**
 * AppController Destructor.
 *
 */
AppController::~AppController(void)
{
	// Nothing to do.
}

int AppController::checkAppConf(void)
{
	int flag = 0;
	FILE *fgi;
	fopen_s(&fgi, "System.conf", "rb");
	if (fgi == NULL) {
		flag = -1;
	}
	return flag;
}