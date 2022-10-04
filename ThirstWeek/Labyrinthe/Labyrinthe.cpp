// Labyrinthe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
const int row = 6, column = 14;
bool sortie = false;
string map[row][column] =
{
    {"#","#","#","#","#","#","#","s","#","#","#","#","#","#" },
    {"#","#"," "," "," ","#","#"," ","#","#"," "," ","#","#" },
    {"#","#"," ","#","#","#","#"," "," "," "," ","#","#","#" },
    {"#","#"," "," "," "," "," ","#","#","#"," ","#","#","#" },
    {"#","#","#","#","#","#"," "," "," "," "," ","#","#","#" },
    {"#","#","#","#","#","#","e","#","#","#","#","#","#","#"}
};
int xLoc = 6, yLoc = 5;
void SetCursor();
void ViewMap();



void ViewMap()
{
    for (int y = 0; y < row; y++)
    {
        string _tmp;
        for (int x = 0; x < column; x++)
        {
            if (y == yLoc && x == xLoc)
            {
                _tmp += "+";
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
    cout << "Moove with z,s,d,q\n";
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
            xLoc--;
            xLoc = xLoc < 0 ? 0 : xLoc;
            if (map[yLoc][xLoc] == "#")
            {
                cout << "ceci est un mur recommencer\n";
                xLoc++;
            }
        }
        else if (_right)
        {
            xLoc++;
            xLoc = xLoc > column - 1 ? column - 1 : xLoc;
            if (map[yLoc][xLoc] == "#")
            {
                cout << "ceci est un mur recommencer\n";
                xLoc--;
            }
        }
        else if (_up)
        {
            yLoc--;
            yLoc = yLoc < 0 ? 0 : yLoc;
            if (map[yLoc][xLoc] == "#")
            {
                cout << "ceci est un mur recommencer\n";
                yLoc++;
            }
        }
        else if (_down)
        {
            yLoc++;
            yLoc = yLoc > row - 1 ? row - 1 : yLoc;
            if (map[yLoc][xLoc] == "#")
            {
                cout << "ceci est un mur recommencer\n";
                yLoc--;
            }
        }
        else if (map[yLoc][xLoc] != "#")
        {
            map[yLoc][xLoc] = "+";
        }
    }
}


void EndGame()
{
    if (map[yLoc][xLoc] == "s")
    {
        cout << "Bravo vous avez trouver la sortie !!!\n";
        sortie = true;
    }
}


int main()
{
    while (!sortie)
    {
        ViewMap();
        SetCursor();
        EndGame();
    }
}

