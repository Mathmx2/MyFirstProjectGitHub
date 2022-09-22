// ExoGroup.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
string trad; 
string word;




void EnterWord()
{
	cout << " Rentrer votre mot.\n Vous avez le choix entre la traduction de courir, parler, quitter, jouer et bouger\n ";
	cin >> word;
}

#pragma region Fr To Eng
string TranslateFrToEng(string _word)
{
	if (_word == "courir")
	{
		_word = "run";
		return _word; 
	}
	else if (_word == "parler")
	{
		_word = "talk";
		return _word; 

	}
	else if (_word == "quitter")
	{
		_word = "exit";
		return _word;
	}
	else if (_word == "jouer")
	{
		_word = "play";
		return _word;
	}
	else if (_word == "bouger")
	{
		_word = "moove";
		return _word;
	}
	else
	{
		return "Le mot est incorrect";
	}
}
#pragma endregion

#pragma region Eng To Fr

string TranslateEngToFr(string _word)
{
	if (_word == "run")
	{
		_word = "courir";
		return _word;;
	}
	else if (_word == "talk")
	{
		_word = "parler";
		return _word;
	}
	else if (_word == "exit")
	{
		_word = "quitter";
		return _word;
	}
	else if (_word == "play")
	{
		_word = "jouer";
		return _word;
	}
	else if (_word == "moove")
	{
		_word = "bouger";
		return _word;
	}
	else
	{
		return TranslateFrToEng(_word);
	}
}
#pragma endregion

int main()
{
	EnterWord(); 
	trad = TranslateEngToFr(word);
	cout << trad;
}