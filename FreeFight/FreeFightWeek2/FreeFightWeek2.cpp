// FreeFightWeek2.cpp : This file contains the 'main' function. Program execution begins and ends there.

#pragma region include
#include <iostream>
using namespace std;
#pragma endregion

#pragma region Variable
int sizeTab = 0;
string* firstName = nullptr;
string* lastName = nullptr;
string answer;
int answerAge;
int* age = nullptr;
bool yes = true;
#pragma endregion

void AddAge(int _value);
void AddLastName(string _value);
void AddFirstName(string _value);
void SortChoose();

/// <summary>
/// Montre le tableaux contenant les contacts.
/// </summary>
void ShowContact()
{
	for (size_t i = 0; i < sizeTab;i++)
	{
		cout << "Nom : " << lastName[i] << " " << "Prenom : " << firstName[i] << " " << "Age : " << age[i] << endl;
	}
}
/// <summary>
/// Ajoute des constact dans la liste avec le nom, prénom et age.
/// </summary>
void GetContact()
{
	cout << "voulez vous ajouter un contact ? ( yes or no )" << endl;
	cin >> answer;
	if (answer == "yes")
	{
		sizeTab++;
		cout << "Nom : " << endl;
		cin >> answer;
		AddLastName(answer);

		cout << "Prenom : " << endl;
		cin >> answer;
		AddFirstName(answer);

		cout << "Age : " << endl;
		cin >> answerAge;
		AddAge(answerAge);
	}
	else 
	{
		yes = false; 
	}
}
/// <summary>
/// Trie l'age par ordre croisant.
/// </summary>
void SortAge()
{
	int _tmp = 0;
	string _tmpLastName;
	string _tmpFirstName;
	for (size_t i = 0; i < sizeTab; i++)
	{
		for (size_t j = i; j < sizeTab; j++)
		{
			if (i == sizeTab - 1)
			{
				age[i];
			}
			else if (age[i] > age[j])
			{
				int _tmp = age[i];
				age[i] = age[j];
				age[j] = _tmp;

				string _tmpLastName = lastName[i];
				lastName[i] = lastName[j];
				lastName[j] = _tmpLastName;

				string _tmpFirstName = firstName[i];
				firstName[i] = firstName[j];
				firstName[j] = _tmpFirstName;
			}
		}
	}
}

/// <summary>
/// Permet de savoir si on veux trié l'age par ordre croissant.
/// </summary>
void SortChoose()
{
	cout << "Voulez vous trier par age dans l'ordre croissant ? (yes or no)\n";
	cin >> answer;
	if (answer == "yes")
	{
		SortAge();
	}
}
/// <summary>
/// Permet d'ajouter l'age.
/// </summary>
/// <param name="_value">Age du contact</param>
void AddAge(int _value)
{
	int* _tmp = age;
	age = new int[sizeTab];
	for (size_t i = 0; i < sizeTab - 1;i++)
		age[i] = _tmp[i];
	age[sizeTab - 1] = _value;
}
void AddLastName(string _value)
{
	string* _tmp = lastName;
	lastName = new string[sizeTab];
	for (size_t i = 0; i < sizeTab - 1;i++)
		lastName[i] = _tmp[i];
	lastName[sizeTab - 1] = _value;
}
void AddFirstName(string _value)
{
	string* _tmp = firstName;
	firstName = new string[sizeTab];
	for (size_t i = 0; i < sizeTab - 1;i++)
		firstName[i] = _tmp[i];
	firstName[sizeTab - 1] = _value;
}

/// <summary>
/// delete les tableaux.
/// </summary>
void Clear()
{
	delete[] firstName;
	delete[] lastName;
	delete[] age;

}

int main()
{
	while (yes)
	{
		GetContact();
		ShowContact();
	}
	SortChoose();
	ShowContact();
	Clear();
}

	