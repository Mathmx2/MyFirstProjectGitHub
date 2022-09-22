// CorrectionPresentation2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

// set first and lastName 
using namespace std;
string firstName = "Mathieu",
       lastName = "MARECHAUX",
       result = "";
// déclaration paralelle
int i, j;
// affectation groupée
int k = i = j = 10;


/// <summary>
/// Prepare contact infos from firstname and lastname.
/// </summary>
string GetContact()
{
    return "Firstname is : \n"
        + firstName
        + "\n"
        + "Lastname is : \n"
        + lastName;// concaténation
}



void ShowContact()
{
    result = GetContact();
    cout << "Contact read : \n" << result;
}



int main()
{
    ShowContact();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
