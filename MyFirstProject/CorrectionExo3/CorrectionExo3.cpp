// CorrectionExo3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#pragma region include
#include <iostream>
using namespace std;
#include <string>
#pragma endregion

#pragma region user info
string firstName = "",
       lastName = "";
int age = 10;
#pragma endregion

#pragma region loc
string frlocFirstName = "Ecrivez votre prenom :",
	   enLocFirstName = "Set your firstname :",
	   frlocLastName = "Ecrivez votre nom :",
	   enLocLastName = "Set your lastname :",
	   frlocage = "Ecrivez votre age :",
	   enLocage = "Set your age :";
#pragma endregion


void SetFirstName(string _locLabel)
{
	cout << _locLabel << "\n";
	cin >> firstName; 
}

void SetLastName(string _locLabel)
{
	cout << _locLabel << "\n";
	cin >> lastName;
}

void Age(string _locLabel)
{
	cout << _locLabel << "\n";
	cin >> age;
}

string GetFullContact()
{
	return firstName + " " + lastName + " " + to_string(age);
}

void ShowContact()
{
	cout << GetFullContact();
}

int main()
{
	SetFirstName(frlocFirstName);
	SetLastName(frlocLastName);
	Age(frlocage);
	ShowContact(); 
}

