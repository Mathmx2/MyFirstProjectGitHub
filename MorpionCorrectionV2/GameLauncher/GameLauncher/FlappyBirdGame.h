#pragma once
#include "IGame.h"

#define SCREEN_WIDTH 90
#define SCREEN_HEIGHT 26
#define WIN_WIDTH 70
#define MENU_WIDTH 20
#define GAP_SIZE 7
#define PIPE_DIF 45
#define SPACE 32
#define ESCAPE 27

class FlappyBirdGame
{
#pragma region f/p
private:
	int birdPos = SCREEN_HEIGHT /2;
	int score = 0;
	char bird[2][6] = { '/','-','-','o','\\',' ',
					'|','_','_','_',' ','>' };
#pragma endregion

#pragma region constructor
public:
	FlappyBirdGame();
	~FlappyBirdGame();
#pragma endregion constructor

#pragma region methods
public:
	virtual void DrawBorder();
	virtual void DrawBird();
	virtual void EraseBird();
	virtual int OnStart() ;
	virtual void OnUpdate() ;
	virtual void Pipe();
	virtual void DisplayMenu() ;
	virtual std::string GameName() const ;
	virtual std::string GameDescription() const ;

#pragma endregion



};

