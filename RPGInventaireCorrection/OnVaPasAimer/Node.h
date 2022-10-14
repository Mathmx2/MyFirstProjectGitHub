#pragma once
template <typename T>
class Node
{
	T data = T();
	Node* next = nullptr;
	Node* prev = nullptr;

	Node(T _data, Node* _next, Node* _prev);
	T &Data();
	Node* Next() const;
	Node* Prev() const;
	void SetNext(Node* _next);
	void SetPrev(Node* _prev);

};
template <typename T>
Node<T>::Node(T _data, Node* _next, Node* _prev)
{
	data = _data;
	next = _next;
	prev = _prev;
}


template <typename T>
T& Node<T>::Data()
{
	return data;
}

template<typename T>
Node<T>* Node<T>::Next() const
{
	return next;
}

template<typename T>
Node<T>* Node<T>::Prev() const
{
	return prev;
}

template<typename T>
void Node<T>::SetNext(Node* _next)
{
	next = _next;
}

template<typename T>
void Node<T>::SetPrev(Node* _prev)
{
	prev = _prev;
}

