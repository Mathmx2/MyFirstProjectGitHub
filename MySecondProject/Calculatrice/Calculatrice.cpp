// Calculatrice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#pragma region include
#include <iostream>
using namespace std;
#pragma endregion


int x, y, result;

/// <summary>
/// Addition the First and the second value
/// </summary>
/// <returns> return result of calcul</returns>
int Addition(int _a, int _b)
{
	return _a + _b;
}

/// <summary>
/// Multiply the First and the second value
/// </summary>
/// <returns> return result of calcul</returns>
int Multiply(int _a, int _b)
{
	return _a * _b;
}

/// <summary>
/// Divide the First and the second value
/// </summary>
/// <returns> return result of calcul</returns>
int Divide(int _a, int _b)
{
	return _a / _b;
}

/// <summary>
/// Substract the First and the second value
/// </summary>
/// <returns> return result of calcul</returns>
int Substract(int _a, int _b)
{
	return _a - _b;
}

/// <summary>
/// Set the First Value in Variable "x"
/// </summary>
void FirstValue()
{
	cout << "Quelle est votre premiere valeur ? \n";
	cin >> x;
}

/// <summary>
/// Set the Second Value in Variable "y"
/// </summary>
void LastValue()
{
	cout << "Quelle est votre deuxieme valeur ? \n";
	cin >> y;
}

/// <summary>
/// Show result of calcul.
/// </summary>
void ShowValue()
{
	cout << "Addition :\n";
	result = Addition(x, y);
	cout << result << "\n";

	cout << "Soustraction :\n";
	result = Substract(x, y);
	cout << result << "\n";

	cout << "Multiplication :\n";
	result = Multiply(x, y);
	cout << result << "\n";

	cout << "division :\n";
	result = Divide(x, y);
	cout << result << "\n";
}

int main()
{
	FirstValue();
	LastValue();
	ShowValue();
	
}

