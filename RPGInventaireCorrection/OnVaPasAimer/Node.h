#pragma once
class Node
{
	int data;
	Node* next = nullptr;
	Node* prev = nullptr;

	Node(int _data, Node* _next, Node* _prev)
	{
		data = _data;
		next = _next;
		prev = _prev;
	}



};

