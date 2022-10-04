// RPGExo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

class Node
{
public:
    int data;
    Node* next = nullptr;
    Node(int _data, Node* _next = nullptr)
    {
        data = _data;
        next = _next;
    }

};

class List
{
private:
    Node* head = nullptr;
    Node* cursor = nullptr;
public:

    void AddFirst(int _data)
    {
        if (head == nullptr)
        {
            head = new Node(_data);
        }
        else
        {
            Node* _newNode = new Node(_data, head);
            head = _newNode;
        }
    }
    void AddLast(int _data)
    {
        if (head == nullptr)
        {
            head = new Node(_data);
        }
        else
        {
            while (head != nullptr)
            {
                Display();
            }
            Node* _newNode = new Node(_data, head);
            head = _newNode;
        }
    }

    void AddAfter(int _data)
    {

    }

    void Display()
    {
        while (head != nullptr)
        {
            std::cout << head->data << " ";
            head = head->next;
        }
    }
    void Clear()
    {
        
    }
};



int main()
{
    List list = List();
    list.AddFirst(0);
    list.AddFirst(3);
    list.AddFirst(1);
    list.AddLast(4);
    list.AddLast(10);

    list.Display();









    /*
    std::vector<int> tab = std::vector<int>();
    tab.push_back();
    tab.emplace_back();
    tab.size();
    tab.erase(tab.begin()+5);
    tab[0] = 5;
    std::cout << tab[0];
    */
}

