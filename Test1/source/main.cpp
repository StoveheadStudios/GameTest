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
    int press = 0;
	while (aptMainLoop())
	{
		//Scan all the inputs. This should be done once for each frame
		hidScanInput();

		//hidKeysDown returns information about which buttons have been just pressed (and they weren't in the previous frame)
		//hidKeysHeld returns information about which buttons are currently pressed (regardless if they were pressed or not pressed in the previous frame)
		//hidKeysUp returns information about which buttons are not pressed but were pressed in the previous frame
		u32 kDown = hidKeysDown();
		if (kDown & KEY_B) break; // break in order to return to hbmenu
		if (kDown & KEY_A) 
		{
			press++;
			cout << "You pressed the button " << press << " times\n";

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
