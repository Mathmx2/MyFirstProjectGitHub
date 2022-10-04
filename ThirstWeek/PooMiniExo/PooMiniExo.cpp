// PooMiniExo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



int main()
{
    std::string t = "Hello World!\n"; // input

    string res = "";
    for (size_t i = 0; i < t.length(); i++)
    {
        if (t[i] == isupper(t[i]))
        {
            t[i] = "_";
        }
    }
}

