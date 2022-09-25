// PolymorphiePrepaObjet.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int playerLife = 100;
int GetlayerLife();
int GetlayerLife(int _dmg);
int GetlayerLife(int _dmg, int _hour);

int DefaultSpec(int _dmg = 1);
//int DefautlSpec(int _dmg = 1, float _other);        Faux
//int DefautlSpec(int _dmg = 1, float _other = 2);    Vrai
//int DefautlSpec(int _dmg, float _other = 2);        Vrai 

void toto();
void First();
void Example(float , int);

float last();
float last(int _a);
float last(int _a,int _b);

int DefaultSpec(int _dmg)
{
	return _dmg;
}


int GetlayerLife()
{
	return playerLife;
}

int GetlayerLife(int _dmg)
{
	return playerLife * _dmg;
}

int GetlayerLife(int _dmg, int _hour)
{
	return (playerLife * _dmg) / _hour;

}














void First()
{
	toto();
	Example(5,0);
}

void toto()
{

}

void Example(float _f, int _i)
{

}

float last()
{

}

float last(int _a)
{

}

float last(int _a, int _b)
{

}


int main()
{

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
