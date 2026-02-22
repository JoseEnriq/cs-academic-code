#pragma once
#include <iostream>

template<class T>
class Node
{
private:
	T v;
	Node* Next;

public:
	Node(T v)
	{
		this->v = v;
		this->Next = NULL;
	}

	T getValor()
	{
		return v;
	}

	Node* getNext()
	{
		return Next;
	}

	void setNext(Node* n)
	{
		Next = n;
	}
};

