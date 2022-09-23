// ContactExo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#pragma region include
#include <iostream>
using namespace std;
#pragma endregion

// Set variable 
#pragma region variable 
string firstName,
lastName;
int age;
#pragma endregion 

/// <summary>
/// Take info Contact : Firstname, LastName and Age.
/// </summary>
void SetContact()
{
	cout << "Quelle est votre nom ?\n";
	cin >> lastName;

	cout << "Quelle est votre prenom ?\n";
	cin >> firstName;

	cout << "Quelle est ton age\n";
	cin >> age;
}

/// <summary>
/// Show variable set in "SetContact".
/// </summary>
void ShowContact() {
	cout << " Votre nom est : " << lastName << "\n";
	cout << " Votre prenom est : " << firstName << "\n";
	cout << " Vous avez : " << age << " ans\n";
}

int main()
{
	SetContact();
	ShowContact();
}
