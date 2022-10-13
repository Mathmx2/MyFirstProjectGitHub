// Enum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int moove;
enum Axis
{
    x = 1000,
    y
};



int main()
{
    int _axis = moove;
    if (_axis == Axis::y)
    {

    }
    else if (_axis == Axis::y)
    {

    }

    switch (_axis)
    {
        case Axis::x:
        {
            cout << "Axis de x";
            break;
        }
        case Axis::y:
        {
            cout << "Axis de y";
            break;
        }
        default:
        {
            cout << "Default";
            break;
        }
    }
}

