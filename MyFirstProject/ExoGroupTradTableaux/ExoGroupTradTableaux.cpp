// ExoGroupTradTableaux.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//string lastInput = "";

const int sizeTab = 4;
bool isFrenchTranslation = true;
string  WordFr[sizeTab] = { "avion","arbre","pomme", "eau" },
		WordEn[sizeTab] = { "plane","tree", "apple","water" };


string GetModeWords(bool _frMode)
{
	string _word = "";
	if (_frMode)
	{
		for (int i = 0; i < sizeTab; i++)
		{
			string _endWord = (i == sizeTab-1) ? "." : ", ";
			_word += WordEn[i] + _endWord;
		}
		return "Words are : " + _word;
	}
	else
		for (int i = 0; i < sizeTab; i++)
		{
			string _endWord = (i == sizeTab-1) ? "." : ", ";
			_word += WordFr[i] + _endWord;
		}
	return "Les mots sont :" + _word;
}


void InitTranslator(bool _frMode)
{
	cout << GetModeWords(_frMode) << endl;
}

string IsValidWord(string _input)
{

	for (int i = 0; i < sizeTab; i++)
	{
		if (_input == WordFr[i])
			return WordEn[i];
		else if (_input == WordEn[i])
			return WordFr[i];
	}
}



string InputWord()
{
	string _input;
	cin >> _input;
	cout << "Word is : " << _input << endl;
	return _input;
}


int main()
{
	InitTranslator(isFrenchTranslation);
	cout << IsValidWord(InputWord()) << endl;
	main();
}

