// ExoJardinier.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
const int row = 4, column = 4;
int content[row][column] =
{
	{0,0,1,0},
	{0,0,1,0},
	{1,0,1,1},
	{0,0,0,1}
},
currentLocationX = 0,
currentLocationY = 0;
int x = 0, y = 0;



void ViewGarden()
{
	for (int y = 0; y < row; y++)
	{
		string _tmp;
		for (int x = 0; x < column; x++)
		{
			_tmp += (content[y][x] == 1) ? 'A' : '-';
		}
		cout << _tmp << endl;

	}
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

        bool _left = _input == 'q',
            _right = _input == 'd',
            _up = _input == 'z',
            _down = _input == 's';

        if (_left)
        {
            currentLocationX--;
            currentLocationX = currentLocationX < 0 ? 0 : currentLocationX;
        }
        else if (_right)
        {
            currentLocationX++;
            currentLocationX = currentLocationX > column - 1 ? column - 1 : currentLocationX;
        }
        else if (_up)
        {
            currentLocationY--;
            currentLocationY = currentLocationY < 0 ? 0 : currentLocationY;
        }
        else if (_down)
        {
            currentLocationY++;
            currentLocationY = currentLocationY > row - 1 ? row - 1 : currentLocationY;
        }
    }

}

void Tree()
{
    if (content[currentLocationY][currentLocationX] == 0)
    {
        string _answer;
        cout << "vouler vous planter un arbre ? ( yes or no ) \n";
        cin >> _answer;
        if (_answer == "yes")
            content[currentLocationY][currentLocationX] = 1;

    }
    else if (content[currentLocationY][currentLocationX] == 1)
    {
        string _answer;
        cout << "vouler vous couper un arbre ? ( yes or no ) \n";
        cin >> _answer;
        if (_answer == "yes")
            content[currentLocationY][currentLocationX] = 0;

    }
}




int main()
{

    while (true)
    {
        ViewGarden();
        Tree();
        SetCursor();
    }
}
