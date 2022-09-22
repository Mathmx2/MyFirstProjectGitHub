// Bool.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int a, b;

int EnterFirstNumber()
{
	cout << "Quelle valeur voulez vous que le 2eme joueur trouve ? (Le nombre doit etre entre 1 et 100) \n";
	cin >> a;
	if (a < 0 || a > 100)
		return EnterFirstNumber();
	return a;
}

int EnterSecondNumber()
{
	cout << "Quelle valeur le 1er joueur a entre ? (Le nombre doit etre entre 1 et 100)\n";
	cin >> b;
	if (b < 0 || b > 100)
		return EnterSecondNumber();
	return b;
}

void CompareNumber(int a_, int _b) 
{
	if (a_ > _b)
	{
		cout << "superieur\n";
		return CompareNumber(a, EnterSecondNumber());
	}
	else if (a_ < _b)
	{
		cout << "inferieur\n";
		return CompareNumber(a, EnterSecondNumber());
	}
	else if (a_ == _b)
	{
		cout << "Bravo !";
	}

}

int main()
{
	EnterFirstNumber();
	system("CLS");
	CompareNumber(a,EnterSecondNumber());
}

