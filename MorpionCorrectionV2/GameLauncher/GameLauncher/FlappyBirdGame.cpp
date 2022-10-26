#include "FlappyBirdGame.h"
#include <iostream>
#include "Utils.h"
#include <conio.h>

#pragma region methods
FlappyBirdGame::FlappyBirdGame()
{
}
FlappyBirdGame::~FlappyBirdGame()
{
}
void FlappyBirdGame::DrawBorder()
{

    for (int i = 0; i < SCREEN_WIDTH; i++)
    {
        Utils::SetCursorPosition(i, 0);
        std::cout << "±";
        Utils::SetCursorPosition(i, SCREEN_HEIGHT);
        std::cout << "±";
    }
    for (int i = 0; i < SCREEN_HEIGHT; i++)
    {
        Utils::SetCursorPosition(0, i);
        std::cout << "±";
        Utils::SetCursorPosition(SCREEN_WIDTH, i);
        std::cout << "±";
    }
    for (int i = 0; i < SCREEN_HEIGHT; i++)
    {
        Utils::SetCursorPosition(WIN_WIDTH, i);
        std::cout << "±";
    }


}

void FlappyBirdGame::DrawBird()
{
    for (int i = 0; i < 2; i++)
    {
        std::cout << std::endl;
        for (int j = 0; j < 6; j++)
        {
            Utils::SetCursorPosition(j+1, i + birdPos);
            std::cout << bird[i][j] ;
        }
    }

}

void FlappyBirdGame::EraseBird()
{
    Utils::SetCursorPosition( 1,birdPos);
    for (int i = 0; i < 2; i++)
    {
            Utils::SetCursorPosition(1, i + birdPos);
            std::cout << "      ";
    }

}

int FlappyBirdGame::OnStart()
{
    return score = 0;
}

void FlappyBirdGame::OnUpdate()
{
    while (true)
    {
        birdPos += 1;
        FlappyBirdGame::DrawBird();
        Sleep(500);
        if (Utils::CinNoBlock() == SPACE)
        {
            FlappyBirdGame::EraseBird();
            birdPos -= 2;
        }
        FlappyBirdGame::EraseBird();
        FlappyBirdGame::Pipe();
    }
        
}


void FlappyBirdGame::DisplayMenu()
{
    std::string _key = "";
    Utils::ClearConsole();
    Utils::LogTitleFrame(GameName());
    const std::string _char = "1. Start Game\n2. Instructions\n3. Quit";
    char _choice = Utils::UserChoice<char>(_char, '0', '1', '2', '3', "Select option : ");
    if (_choice == '1')
    {
        Utils::ClearConsole();
        FlappyBirdGame::DrawBorder();
        FlappyBirdGame::OnUpdate();
    }
    else if (_choice == '2')
    {
        Utils::ClearConsole();
        std::cout << GameDescription();
        std::cout << "press any key to go back to menu" << std::endl;
        std::cin >> _key;
        return DisplayMenu();
    }
    
}

std::string FlappyBirdGame::GameName() const
{
    return "Flappy Birds";
}

std::string FlappyBirdGame::GameDescription() const
{
    return "Instruction\n---------------\nPress spacebar to make bird fly\n";
}
#pragma endregion methods