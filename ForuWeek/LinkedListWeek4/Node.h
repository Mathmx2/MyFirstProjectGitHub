#pragma once
class Node
{
public:
	int data;
	Node* next = nullptr;
	Node* prev = nullptr;

	Node(int _data, Node* _next = nullptr, Node* _prev = nullptr);



	Node(int _data, Node* _next = nullptr, Node* _prev = nullptr)
	{
		data = _data;
		next = _next;
		prev = _prev;
	}



};

