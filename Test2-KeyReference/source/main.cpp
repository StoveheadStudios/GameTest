#include <iostream>
#include <vector>
#include <string>
#include <3ds.h>
#include <stdio.h>

using namespace std;

int main(int argc, char **argv)
{
	//Initialize gfx (note: not needed if you're using SF2Dlib)
	gfxInitDefault();

	consoleInit(GFX_TOP, NULL);

	// Main loop
	while (aptMainLoop())
	{
		//Scan all the inputs. This should be done once for each frame
		hidScanInput();

		//hidKeysDown returns information about which buttons have been just pressed (and they weren't in the previous frame)
		//hidKeysHeld returns information about which buttons are currently pressed (regardless if they were pressed or not pressed in the previous frame)
		//hidKeysUp returns information about which buttons are not pressed but were pressed in the previous frame
		u32 kDown = hidKeysDown();
		if (kDown & KEY_START) break; // break in order to return to hbmenu
		
		if (kDown & KEY_A)
		{
			cout << ("KEY_A\n");
		}
		
		if (kDown & KEY_B)
		{
			cout << ("KEY_B\n");
		}
		
		if (kDown & KEY_X)
		{
			cout << ("KEY_X\n");
		}
		
		if (kDown & KEY_Y)
		{
			cout << ("KEY_Y\n");
		}
		
		if (kDown & KEY_R)
		{
			cout << ("KEY_R\n");
		}

		if (kDown & KEY_L)
		{
			cout << ("KEY_L\n");
		}

		if (kDown & KEY_DUP)
		{
			cout << ("KEY_DUP\n");
		}

		if (kDown & KEY_DDOWN)
		{
			cout << ("KEY_DDOWN\n");
		}

		if (kDown & KEY_DLEFT)
		{
			cout << ("KEY_DLEFT\n");
		}

		if (kDown & KEY_DRIGHT)
		{
			cout << ("KEY_DRIGHT\n");
		}

		if (kDown & KEY_CPAD_UP)
		{
			cout << ("KEY_CPAD_UP\n");
		}

		if (kDown & KEY_CPAD_DOWN)
		{
			cout << ("KEY_CPAD_DOWN\n");
		}

		if (kDown & KEY_CPAD_LEFT)
		{
			cout << ("KEY_CPAD_LEFT\n");
		}

		if (kDown & KEY_CPAD_RIGHT)
		{
			cout << ("KEY_CPAD_RIGHT\n");
		}

		if (kDown & KEY_SELECT)
		{
			cout << ("KEY_SELECT\n");
		}

		if (kDown & KEY_TOUCH)
		{
			cout << ("KEY_TOUCH\n");
		}

		







		// Flush and swap framebuffers, this is needed for rendering these will not be needed when using SF2D lib
		gfxFlushBuffers();
		gfxSwapBuffers();

		//Wait for VBlank, this is needed for rendering these will not be needed when using SF2D lib
		gspWaitForVBlank();
	}

	gfxExit();
	return 0;
}
