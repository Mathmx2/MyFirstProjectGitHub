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

void TriAge()
{
	for (int i = 0; i < sizeTab; i++)
	{

		if (Age[i] > Age[i + 1])
		{
			cout << Age[i + 1] << endl;
			int _Age = Age[i];
			Age[i] = Age[i + 1];
			Age[i + 1] = _Age;
			
		}
		else 
		{
			cout << i << endl;
			cout << Age[i] << endl;
		}
	}
}


int main()
{
	//ShowContact();
	TriAge();
}

