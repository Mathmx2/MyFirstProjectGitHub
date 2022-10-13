// CasseTete2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <string>





int main()
{
    string _t = "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++.++++++++++++++++++++++++++++ + .++++++ + ..++ + .";
    int ascii = 0;
    for (char c : _t)
    {
        ascii = c == '+' ? ascii + 1 : c == '-' ? ascii - 1 : ascii;
        if (c == '.') std::cout << (char)ascii;
    }
    return 0;
}

