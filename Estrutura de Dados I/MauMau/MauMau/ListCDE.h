#pragma once
#include <iostream>

using namespace std;

template <class T>
class Node
{
public:
	T valor;
	Node<T>* next;
	Node<T>* prev;
	Node(T v)
	{
		this->valor = v;
		next = prev = NULL;
	}
};

template <class T>
class ListCDE
{
private:
	Node<T>* head;
	Node<T>* tail;
	int tam;

public:
	ListCDE()
	{
		head = tail = NULL;
		tam = 0;
	}
	~ListCDE()
	{
	}

	void pushFront(T v)
	{
		Node<T>* temp = new Node<T>(v);

		if (head == NULL)
		{
			head = tail = temp;
		}

		else
		{
			head->prev = temp;
			temp->next = head;
			head = temp;
		}

		tam++;
	}

	void pushBack(T v)
	{
		Node<T>* temp = new Node<T>(v);

		if (tail == NULL)
		{
			head = tail = temp;
		}

		else
		{
			tail->next = temp;
			temp->prev = tail;
			tail = temp;
		}

		tam++;
	}

	T popFront()
	{
		if (!isEmpty())
		{
			Node<T>* temp = head;
			if (head == tail)
			{
				tail = NULL;
			}

			T delValor = temp->valor;
			head = head->next;

			delete temp;

			tam--;

			return delValor;

		}

		else
		{
			cout << "Fila esta vazia" << endl;
		}
	}

	T popBack()
	{
		if (!isEmpty())
		{
			Node<T>* temp = tail;
			if (head == tail)
			{
				head = NULL;
			}

			T delValor = temp->valor;
			tail->next = NULL;
			tail = tail->prev;

			delete temp;

			tam--;

			return delValor;

		}

		else
		{
			cout << "Fila esta vazia" << endl;
		}
	}

	bool isEmpty()
	{
		if (tam <= 0)
		{
			return true;
		}

		return false;
	}

	void listar()
	{
		Node<T>* temp = head;

		cout << endl;
		while (temp != NULL)
		{
			cout << temp->valor << endl;
			temp = temp->next;
		}
	}

	int tamanho()
	{
		return tam;
	}

	bool search(T v)
	{
		if (!isEmpty())
		{
			Node<T>* temp = head;
			while (temp)
			{
				if (temp->valor == v)
				{
					cout << "Valor encontrado" << endl;
					return true;
				}
				temp = temp->next;
			}

			return false;
		}
		else
		{
			return false;
		}
	}

	T front()
	{
		Node<T>* temp = head;
		return temp->valor;
	}

	T back()
	{
		Node<T>* temp = tail;
		return temp->valor;
	}
};

