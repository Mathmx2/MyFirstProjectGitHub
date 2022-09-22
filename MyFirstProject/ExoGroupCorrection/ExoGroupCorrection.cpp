// ExoGroupCorrection.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

string firstWordFr = "avion", secondWordFr = "arbre",
	   firstWordEn = "plane", secondWordEn = "tree";
string lastInput = "";
bool isFrenchTranslation = false;


string GetModeWords(bool _frMode)
{
	if (_frMode)
	{
		return "Word are : " + firstWordEn + ", " + secondWordEn;
	}
	else
		return "Les mots sont : " + firstWordFr + ", " + secondWordFr;
}


void InitTranslator(bool _frMode)
{
	cout << GetModeWords(_frMode) << endl;
}

string IsValidWord(string _input)
{
	if (_input == firstWordFr)
		return firstWordEn;
	else if (_input == secondWordFr)
		return secondWordEn;
	else if (_input == firstWordEn)
		return firstWordFr;
	else if (_input == secondWordEn)
		return secondWordFr;
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

