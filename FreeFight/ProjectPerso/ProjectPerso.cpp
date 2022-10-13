// ProjectPerso.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool sortie = false;
int column = 15;
const int row = 15;
string map[row] =
{

	"#######s#######",
	"####    #######",
	"## # ##########",
	"## # ##     ###",
	"##      ### ###",
	"########### ###",
	"##          ###",
	"## ############",
	"## m   #   ####",
	"######   #  ###",
	"##   ###### ###",
	"## ####     ###",
	"##     ### ####",
	"######     ####",
	"######e########"
};
int xLoc = 6, yLoc = 14;
int lifePlayer = 100, dmgP = 10;



void SetCursor();
void ViewMapV2();

void ViewMapV2()
{
	for (int y = 0; y < row; y++)
	{
		string _tmp;
		for (int x = 0; x < column; x++)
		{
			if (y == yLoc && x == xLoc)
			{
				_tmp += '+';
			}
			else
			{
				_tmp += map[y][x];
			}
		}
		cout << _tmp << endl;

	}
}

void SetCursor()
{
	cout << " Moove with z,s,q,d \n";
	char _input;
	bool _isValid = false;
	while (!_isValid)
	{
		cin >> _input;
		_isValid = _input == 'z' 
			|| _input == 's' 
			|| _input == 'q' 
			|| _input == 'd';

		bool _left = _input == 'q',
			_right = _input == 'd',
			_up = _input == 'z',
			_down = _input == 's';

		if (_left)
		{
			xLoc--;
			xLoc = xLoc < 0 ? 0 : xLoc;
			if (map[yLoc][xLoc] == '#')
			{
				xLoc++;
			}
		}
		if (_right)
		{
			xLoc++;
			xLoc = xLoc > column ? column - 1 : xLoc;
			if (map[yLoc][xLoc] == '#')
			{
				xLoc--;
			}
		}
		if (_up)
		{
			yLoc--;
			yLoc = yLoc < 0 ? 0 : yLoc;
			if (map[yLoc][xLoc] == '#')
			{
				yLoc++;
			}
		}
		if (_down)
		{
			yLoc++;
			yLoc = yLoc > row - 1 ? row - 1 : yLoc;
			if (map[yLoc][xLoc] == '#')
			{
				xLoc--;
			}
		}
	}
}

void SetFight()
{
	if (map[yLoc][xLoc] == 'm')
	{
		bool _lifeP, _lifeM;
		int _lifeMonter = 100;
		cout << " vous entrez en phase de combat !!!\n";
		while (_lifeP && _lifeM)
		{
			_lifeMonter -= dmgP;
			if (_lifeMonter <= 0)
			{

			}

		}
	}
}


void EndGame()
{
	if (map[yLoc][xLoc] == 's')
	{
		cout << "Bravo vous avez trouver la sortie !!!\n";
		sortie = true;
	}
}


int main()
{
	while (!sortie)
	{
		ViewMapV2();
		SetCursor();
		system("CLS");
		EndGame();
	}
}
