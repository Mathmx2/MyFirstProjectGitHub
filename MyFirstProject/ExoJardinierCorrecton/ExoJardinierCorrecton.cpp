// ExoJardinierCorrecton.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//srand((unsigned int)time(NULL));
//rand() % 11;
#include <iostream>
#include <ctime>
#include <string>
using namespace std;
const int gardenSize = 3;
int garden[gardenSize][gardenSize];
int currentX, currentY;
void InitGarden();
void SetCursor();
void ReadGarden(int _garden[gardenSize][gardenSize]);
void MoovePlayer();
string GetCursorLocation();


string GetCursorLocation()
{
	return "current location is at : (y " + to_string(currentX) + " x : " + to_string(currentY);
}

void SetCursor()
{
	cout << "Moove with z,s,d,q";
	char _input;
	bool _isValid = false;
	while (!_isValid)
	{
		cin >> _input;

		_isValid = _input == 's'
			|| _input == 'z'
			|| _input == 'q'
			|| _input == 'd';
		if (_input == 'z')
		{
			currentX--;
			currentX = currentX < 0 ? 0 : currentX;
		}
		else if (_input == 's')
		{
			currentX++;
			currentX = currentX < 0 ? 0 : currentX;
		}
		else if (_input == 'q')
		{
			currentY--;
			currentX = currentX < 0 ? 0 : currentX;
		}
		else if (_input == 'd')
		{
			currentY++;
			currentX = currentX < 0 ? 0 : currentX;
		}
	}
}



void MoovePlayer()
{
	char _result = garden[currentY][currentX];
	garden[currentY][currentX] = _result == 1 ? 0 : 1;
	cout << garden[currentX][currentY] << endl;
}


void InitGarden()
{
	srand((unsigned int)time(NULL));
	for (size_t i = 0; i < gardenSize; i++)
	{
		string _tmp = "";
		for (size_t j = 0; j < gardenSize; j++)
		{
			garden[j][i] = rand() % 2;
		}

	}
}


void ReadGarden(int _garden[gardenSize][gardenSize])
{
	string _tmp;
	for (size_t y = 0; y < gardenSize; y++)
	{
		for (size_t x = 0; x < gardenSize; x++)
		{
			_tmp += _garden[y][x] == 1 ? 'A' : 'C';
		}
		_tmp += "\n";
	}
	cout << _tmp << endl;
}









int main()
{
	void InitGarden();
	while (true)
	{
		void ReadGarden(garden);
		void SetCursor();
		void MoovePlayer();
	}
}

