// MethodParameter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

string defaultName = "Toto";
string enLoc = "My name is : ",
frLoc = "Mon nom est : ";


void ShowName(string _locLabbel,string _name)
{
    cout << _locLabbel << _name <<  "\n";
}

void SetDefaultName()
{
    cin >> defaultName; 
}
int main()
{
    ShowName("My name is ","toto");
    ShowName("My second Name is ", "billy");
    ShowName(frLoc, "toto");
    SetDefaultName();
    ShowName(enLoc, defaultName);
}

