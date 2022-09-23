// ExoChaudFroid.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int numberP1, numberP2;
int gameAttempt = 10, guessMax = 100 , guessMin = 1;


bool IsValidNumber(int _input, int _minGuess, int _maxGuess)
{
	if (_input < _minGuess || _input > _maxGuess)
		return false;
	return true;
}


void EnterNumberP1(int _min, int _max)
{
	cout << " Quelle nombre le joueur 2 doit trouver ? ( De 1 a 100 )\n";
	cin >> numberP1;
	if (IsValidNumber(numberP1, _min, _max) == false)
		EnterNumberP1(_min, _max);
	
}

int EnterNumberP2(int _min, int _max)
{
	cout << " Quelle nombre le joueur 1 a rentrer ? ( De 1 a 100 )\n";
	cin >> numberP2;
	if (IsValidNumber(numberP1, _min, _max) == false)
		EnterNumberP2(_min, _max);
	else
	{
		return numberP2;
	}
}

void VerifNumber(int _numberP2,int _gameAttempt)
{
	 _gameAttempt = _gameAttempt - 1;
	 if (numberP1 == _numberP2)
	 {
		 cout << "You WIN !\n";
	 }
	 else if (_gameAttempt != 0)
	 {
		 if (numberP1 < _numberP2)
		 {
			 cout << "You loose\n" << "too Hight !\n";
			 cout << " il vour reste : " << _gameAttempt << " tour\n";
			 return VerifNumber(EnterNumberP2(guessMin, guessMax), _gameAttempt);
		 }
		 else if (numberP1 > _numberP2)
		 {
			 cout << "You loose\n" << "too low !\n";
			 cout << " il vour reste : " << _gameAttempt << " tour\n";
			 return VerifNumber(EnterNumberP2(guessMin, guessMax), _gameAttempt);
		 }
	 }
	else
	{
		cout << "You loose ! tour = 0\n";
	}

}




int main()
{
	EnterNumberP1(guessMin, guessMax);
	system("CLS");
	VerifNumber(EnterNumberP2(guessMin, guessMax), gameAttempt);
}
