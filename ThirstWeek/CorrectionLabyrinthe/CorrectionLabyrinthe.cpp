// CorrectionLabyrinthe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//#include <windows.sh>
using namespace std;
const char exitValue = 's', player = 'p', enter = 'e', wall = '#', path = ' ';
const size_t mapSize = 6;
size_t currentX = 0, currentY = 0;
char currentInput = 'a';
char** t = new char* [10];
for (int i = 0; < 10; i++)
{
    t[i] = new char(0); // crée un char de valeur 0 ou 'a' si on veut new char
    t[i] = new char[10]; // crée un nouveaux tab de 10
}
delete[] t;
string map[mapSize] =
{
    "#######s#######",
    "##   ## ##  ###",
    "## ####    ####",
    "##     ### ####",
    "######     ####",
    "######e########"
};

bool Init();


int main()
{
    setlocale(LC_ALL, "");
    if (!Init())
    {
        return -2;
    }
    GameLoop();
    system("cls");
    cout << "félisitations ! " << endl;
    return 0;
}

bool Init()
{
    bool find = false;
    for (size_t y = 0; y < mapSize && !find;y++)
    {
        size_t length = map[y].length();
        for (size_t x = 0; x < length && !find; x++)
        {
            if (map[y][x] == 'e')
            {
                currentY = y;
                currentX = x;
                find = true;
            }
        }

    }
    return find;
}

void Display()
{
    for (size_t y = 0; y < mapSize; y++)
    {
        size_t length = map[y].length();
        for (size_t x = 0; x < length; x++)
        {
            if (currentX == x && currentY == y)
            {
                cout << player;
            }
            else cout << map[y][x];
        }
        cout << endl;
    }
}

void GameLoop()
{
    while (map[currentY][currentX] != exitValue)
    {
        system("CLS");
        Display();
        ReadInput();
    }
}

void ReadInput()
{
    bool _isValidInput = false;
    cout << "choosedirection whith (z,q,s,d)" << endl;
    while (!_isValidInput)
    {
        cin >> currentInput;
        currentInput = tolower(currentInput);
        _isValidInput = currentInput  == 's'
            || currentInput == 'z'
            || currentInput == 'q'
            || currentInput == 'd';
    }
}

bool GetNextMove(size_t _y, size_t _x)
{
    bool _yOutOfRange = _y < 0 || _y > mapSize;
    bool _xOutOfRange = _x < 0 || _x > map[_y].length();
    if (_yOutOfRange || _xOutOfRange) return false;
    return map[_y][_x] != wall;
}

void GetInputValue()
{
    if (currentInput)
    {

    }
}