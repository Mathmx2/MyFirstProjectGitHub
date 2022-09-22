// Exo4Calculatrice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#pragma region include
#include <iostream>
#include <string>
using namespace std;
#pragma endregion

#pragma region variable
int a = 0, b = 0;
int resultAdd, resultSous, resultMul, resultDiv;
#pragma endregion

#pragma region loc
string frLoc = "Ecriver votre valeur : ",
frSecondLoc = "Ecrivez votre deuxieme valeur : ",
frAddLoc = " Si l'operation est une addition alors le resultat est : ",
frSousLoc = " Si l'operation est une soustraction alors le resultat est : ",
frMulLoc = " Si l'operation est une multiplication alors le resultat est : ",
frDivLoc = " Si l'operation est une division alors le resultat est : ";
#pragma endregion

int SetValue(string _LocLabel)
{
	cout << _LocLabel;
	cin >> a;
	return a;
}

int SetSecondValue(string _LocLabel)
{
	cout << _LocLabel;
	cin >> b;
	return b;
}



int Operation()
{
	 resultAdd = a + b;
	 resultSous = a - b;
	 resultMul = a * b;
	 resultDiv = a / b;
	return resultAdd, resultSous, resultMul,resultDiv;
}

void ShowOperation()
{
	cout << frAddLoc << resultAdd << "\n" << frSousLoc << resultSous << "\n";
}

int main()
{
	SetValue(frLoc);
	SetSecondValue(frSecondLoc);
	Operation();
	ShowOperation();

}



