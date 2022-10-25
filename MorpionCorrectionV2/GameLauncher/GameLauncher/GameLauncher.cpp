#include <iostream>
#include "Launcher.h"
#include "LauncherItem.h"
#include "MorpionGame.h"
#include "MorpionBoard.h"
#include <windows.h>
#include "FlappyBirdGame.h"
int main()
{
	SetConsoleTitle(L"Launcher");
	Launcher _launcher = Launcher({
		new LauncherItem(new MorpionGame(),new FlappyBirdGame())
		});
	_launcher.Open();
}