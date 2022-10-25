#include "FlappyBirdGame.h"
#include <iostream>
#include "Utils.h"
#include <conio.h>

#pragma region methods
void FlappyBirdGame::DrawBorder()
{
    for (int i = 0; i < SCREEN_WIDTH; i++) {
        Utils::SetCursorPosition(0, i);
        std::cout << "+";
        Utils::SetCursorPosition(i, SCREEN_HEIGHT);
        std::cout << "+";
    }

    for (int i = 0; i < SCREEN_HEIGHT; i++)
    {
        Utils::SetCursorPosition(0, i);
        std::cout << "+";
        Utils::SetCursorPosition(SCREEN_WIDTH, i);
        std::cout << "+";
    }

    for (int i = 0; i < SCREEN_HEIGHT; i++) {
        Utils::SetCursorPosition(WIN_WIDTH, i);
        std::cout << "+";
    }
}

void FlappyBirdGame::DrawBird()
{

}

void FlappyBirdGame::EraseBird()
{
}

int FlappyBirdGame::OnStart()
{
    return score = 0;
}

std::string FlappyBirdGame::GameNameFlap() const
{
    return "FlappyBirds";
}

std::string FlappyBirdGame::DescriptionFlap() const
{
    return "you incarned a pigeon don't DIE !!!";
}
#pragma endregion methods