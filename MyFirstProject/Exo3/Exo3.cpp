// Exo3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

string firstName, lastName;
int age;

void LastName(string _LocLabbel)
{
    cout << _LocLabbel;
    cin >> lastName;
}

void FirstName(string _LocLabbel)
{
    cout << _LocLabbel;
    cin >> firstName;
}

void Age(string _locage)
{
    cout << _locage;
    cin >> age;
}


int main()
{
    LastName(" Quelle est ton nom ? ");
    FirstName("Quelle est ton prénom ?");
    Age("Quelle est ton age ?");
    cout << firstName << "\n" << lastName << "\n" << age;

}

