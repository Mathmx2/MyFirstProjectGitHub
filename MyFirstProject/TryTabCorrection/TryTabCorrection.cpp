// TryTabCorrection.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int* intArray = nullptr;
int sizeArray = 0;
void InitArray(int& _size);
void InsertValues();
void ReadArray();
void clear();




void InitArray(int& _size)
{
    cout << "set array size : " << endl;
    _size = 0;
    cin >> _size;
    _size = _size <= 0 ? 1 : _size;
    intArray = new int[_size];
    cout << "New int* array size : " << endl;
}
void InsertValues()
{
    for (size_t i = 0; i < sizeArray; i++)
    {
        int _input;
        cin >> _input;
        cout << "Nom value " << _input << " at index : " << endl;
        intArray[i] = _input;
    }
}
void Sort()
{
    int _tmp = 0;
    for (size_t i = 0; i < sizeArray; i++)
    {
        for (size_t j = i; j < sizeArray; j++)
        {
            if (i == sizeArray - 1)
            {
                intArray[i];
            }
            else if (intArray[i] > intArray[j])
            {
                int _tmp = intArray[i];
                intArray[i] = intArray[j];
                intArray[j] = _tmp;
            }
        }
    }
}
void ReadArray()
{
    for (size_t i = 0; i < sizeArray; i++)
        cout << intArray[i] << endl;
}
void clear()
{
    delete[] intArray;
}




int main()
{
    InitArray(sizeArray);
    InsertValues();
    ReadArray();
    Sort();
    ReadArray();
    clear();
}

