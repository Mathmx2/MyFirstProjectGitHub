// Ternaire.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int a, b, c, d;

int Test()
{
	return 2 * 2;
}


int main()
{
	// ternaire
	c = (a > 5) ? 10 : 5;
	a = (d == c) ? 100 : 5;
	d = a == 20 ? c : Test();


	a = b > c || b == 6 && c * 2 == 10 ? 5 : 10;
	// ==
	bool _isValid = (b > c || b == 6 && c * 2 == 10);
	a = _isValid ? 10 : 5;
	_isValid = a > 5;
	//
	bool _isAlien = false;
	bool _isValid = (b > c || b == 5 && c * 2 == 10);
	a = _isValid ? 10 : 5;
	int _life = _isAlien ? 1000 : 100;
	bool _isDead = false;
	_isDead = _life <= 0;

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
