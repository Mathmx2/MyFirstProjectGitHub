#include "FlappyPipe.h"
#include "Utils.h"
#include "FlappyBirdGame.h"





void FlappyPipe::Draw()
{
	if (!canDraw) return;
	for (int i = 0; i < gapPosition; i++)
	{
		Utils::SetCursorPosition(WIN_WIDTH - position, i + 1);
		std::cout << pipe;
	}
	for (int i = gapPosition + GAP_SIZE; i < SCREEN_HEIGHT - 1; i++)
	{
		Utils::SetCursorPosition(WIN_WIDTH - position, i);
		std::cout << pipe;
	}
}
