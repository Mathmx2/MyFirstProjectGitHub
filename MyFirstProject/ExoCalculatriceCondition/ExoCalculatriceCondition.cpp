// ExoCalculatriceCondition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int x, y;
char sign;

/// <summary>
/// Request for the sign of operation and set this sign in variable "sign"
/// </summary>
char Sign()
{
	cout << " Quelle est le signe de l'operation que vous vouler faire ?\n";
	char _tmpResult;
	cin >> _tmpResult;
	return _tmpResult;
}

/// <summary>
/// Request and set the first value in variable "x".
/// </summary>
int SetFirstValue()
{
	cout << "Quelle est t'a premiere valeur ?\n";
	cin >> x;
	return x;
}

/// <summary>
/// Request and set the second value in variable "y".
/// </summary>
int SetLastValue()
{
	cout << "Quelle est t'a deuxieme valeur ?\n";
	cin >> y;
	return y;
}

#pragma region calcul
int Add(int _a, int _b)
{
	return _a + _b;
}

int Subtract(int _a, int _b)
{
	return _a - _b;
}

int Divide(int _a, int _b)
{
	return _a / _b;
}

int Multiply(int _a, int _b)
{
	return _a * _b;
}
#pragma endregion

/// <summary>
/// Compare the input sign in the variable sign with the expected sign to initiate the correct operation.
/// </summary>
void SignDesigned(char _mode, int _x, int _y)
{
	if (_mode == '+')
	{
		cout << "Le resultat est :\n" << Add(_x, _y);
	}
	else if (_mode == '-')
	{
		cout << "Le resultat est :\n" << Subtract(_x, _y);
	}
	else if (_mode == '/')
	{
		cout << "Le resultat est :\n" << Divide(_x, _y);
	}
	else if (_mode == '*')
	{
		cout << "Le resultat est :\n" << Multiply(_x, _y);
	}
	else
	{
		cout << "Le signe utilise n'est pas reconnue !";
	}
}


int main()
{
	SetFirstValue();
	SetLastValue();
	SignDesigned(Sign(),x,y);

}

