// FreeFightWeek1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//                                 Contact List Friends

#pragma region include
#include <iostream>
using namespace std;
#pragma endregion

#pragma region Variable
const int sizeTab = 3;
string FirstName[sizeTab] = { "Mathieu ", "Nicola  ", "Shawn   " },
LastName[sizeTab] = { "MARECHAUX", "ROGUE    ", "RIBAUD   " },
answer;
int Age[sizeTab] = { 21, 19, 30 };
#pragma endregion

void ShowContact()
{
	for (int i = 0; i < sizeTab; i++)
	{
		cout << "Nom : " << LastName[i] << " " << "Prenom : " << FirstName[i] << "Age : " << Age[i] << endl;
	}
}

void RequestAddContact() 
{
	cout << "voulez vous rajouter un contact ?";


}


int main()
{
	ShowContact();
}

