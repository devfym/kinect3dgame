#pragma once

#ifndef		CONFIG_APP_H
#define		CONFIG_APP_H

/**
 * Application Configuration.
 *
 */

typedef struct
{
	/**
	 * Width of Application.
	 *
	 */
	int screensizeX;

	/**
	 * Height of Application.
	 *
	 */	
	int screensizeY;
	
	/**
	 * Volume level of Sound Effects.
	 *
	 */
	int VolumeSE;

	/**
	 * Volume level of Background Music.
	 *
	 */	
	int VolumeBGM;
	
	/**
	 * Text-script loading speed.
	 *
	 */
	int TextSpeed;

} App;

#endif