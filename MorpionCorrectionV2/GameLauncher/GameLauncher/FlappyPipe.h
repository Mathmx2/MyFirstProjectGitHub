#pragma once




class FlappyPipe
{
#pragma region f/p
	bool canDraw = false;
	int gapPosition = 5;
	std::string pipe = "***";
#pragma endregion
#pragma region constructor
	FlappyPipe() = default;
	virtual ~FlappyPipe() = default;
#pragma endregion
#pragma region methods
	void Draw();
#pragma endregion



};

