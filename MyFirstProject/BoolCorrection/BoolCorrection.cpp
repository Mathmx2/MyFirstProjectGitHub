// BoolCorrection.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#pragma region Game settings
int guessNumber = 10,
minGuess = 1,
maxGuess = 100,
gameAttempt = 0,
gameAttemptMax = 2;
bool useLimitGame = false;
#pragma endregion

/// <summary>
/// Set Guess number between min and max
/// </summary>
/// <param name="_min">min guess number clamp></param>
/// <param name="_max">max guess number clamp</param>
void SetGuessNumber(int _min, int _max)
{
	std::cout << "Set number between " << _min << " and " << _max << " : ";
	std::cin >> guessNumber;
	if (guessNumber > _max)
		guessNumber = _max;
	else if (guessNumber < _min)
		guessNumber = _min;
	system("CLS");
}

/// <summary>
/// main loop
/// </summary>
void GuessGame()
{
	std::cout << "Guess a number between " << minGuess << " and " << maxGuess << std:: endl;
	int _guess = 0;
	std::cin >> _guess;
	std::cout << "Your input is : " << _guess << std:: endl;
	//gameAttempt = gameAttempt + 2;
	//gameAttempt += 10;
	//gameAttempt--; //-1
	gameAttempt++; //+1

	if (useLimitGame)
	{
		if (gameAttempt > gameAttemptMax)
		{
			std::cout << "YOU LOOSE ! No more try !" << std::endl;
			gameAttempt = 0;
			SetGuessNumber(minGuess, maxGuess);
			GuessGame();
		}
	}
	if (_guess == guessNumber)
	{
		std::cout << "YOU WIN ! Guess number was : " << _guess << std::endl;
		std::cout << gameAttempt << " attempt !" << std::endl;

		// Game loop
		SetGuessNumber(minGuess, maxGuess);
		GuessGame();
	}
	else if (_guess > guessNumber)
	{
		std::cout << "YOU LOOSE ! Your guess is too hight ! : " << _guess << std::endl;
		// Game loop
		GuessGame();
	}
	else
	{
		std::cout << "YOU LOOSE ! Your guess is too low ! : " << _guess << std::endl;
		// Game loop
		GuessGame();
	}
}

int main()
{
	SetGuessNumber(minGuess, maxGuess);
	GuessGame();
}
