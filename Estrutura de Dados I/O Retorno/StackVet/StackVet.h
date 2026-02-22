#pragma once

#include <iostream>
#define TAM 20

using namespace std;

class StackVet
{
private:
	int stack[TAM];
	int top;
public:

	StackVet()
	{
		top = 0;
	}

	bool isFull()
	{
		if (top == TAM)
			return true;
		
		else
			return false;
	}

	bool isEmpty()
	{
		if (top == 0)
			return true;

		else
			return false;
	}

	void push(int valor)
	{
		if (isFull() == true)
		{
			cout << "Pilha esta cheia" << endl;
		}

		else
		{
			stack[top] = valor;
			top++;
		}
	}

	int pop()
	{
		if (isEmpty() == true)
		{
			cout << "Lista vazia" << endl;
		}

		else
		{
			return stack[--top];
		}
	}

	void Listar()
	{
		if (top == 0)
		{
			cout << "lista vazia" << endl;
		}

		else
		{
			for (int i = top-1; i>-1; i--)
			{
				cout << stack[i] << endl;
			}
		}
	}

};
