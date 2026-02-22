#pragma once
#include "Node.h"

using namespace std;

template <class T>
class ListaLigada
{
private:
	Node<T>* Head;
	Node<T>* Tail;

public:
	ListaLigada()
	{
		Head = NULL; // ambos começam em null
		Tail = NULL;
	}

	ListaLigada(T v)
	{
		Head = new Node(v);
		Tail = Head;
	}

	~ListaLigada()
	{
		delete Head;
	}

	void printLista()
	{
		cout << "Imprimindo todos os elementos..." << endl;
		Node<T>* H = Head; // H começa do primeiro elemento 

		if (empty())
		{
			cout << "A lista nao possui elementos." << endl;
		}

		else
		{
			while (H) // enquanto o head for diferente de null percorre a lista
			{
				cout << H->getValor() << endl; // imprime o valor com a função
				H = H->getNext(); // pega a referencia para o proximo nó
			}

			cout << endl;
		}
	}

	bool empty()
	{
		return (Head == NULL); // se head for == a null, quer dizer que a lista está vazia e com isso retorna true
	}

	void InserirInicio(T v) // push_front
	{
		Node<T>* newNode = new Node<T>(v);

		newNode->setNext(Head);
		Head = newNode; // o novo nó que será o Head
	}

	void InserirFinal(T v) //push_back
	{
		Node<T>* newNode = new Node<T>(v);

		if (empty()) // Head == NULL
		{
			Head = newNode;
			Tail = newNode;
		}

		else
		{
			Tail->setNext(newNode);
			Tail = newNode;
		}
	}

	int tamanho()
	{
		if (empty())
			return 0;

		Node<T>* H = Head;
		int tam = 0;

		do
		{
			H = H->getNext();
			tam++;

		} while (H); // H!= NULL

		return tam;
	}

	bool existe(T v)
	{
		Node<T>* H = Head;

		while (H)
		{
			if (H->getValor() == v)
			{
				return true;
			}

			H = H->getNext();
		}

		return false;
	}

	void removerFinal() // pop_back
	{
		if (!empty())
		{
			if (Head->getNext() == NULL) // se houver apenas 1 elemento
			{
				Head = NULL;
			}

			else if (Head->getNext()->getNext() == NULL) // 2 elementos
			{
				Head->setNext(NULL);
			}

			else // mais de 2 elementos
			{
				Node<T>* prevPrev = Head;
				Node<T>* prev = Head->getNext();
				Node<T>* current = Head->getNext()->getNext();

				while (current)
				{
					Node<T>* aux = prev;
					prev = current;
					prevPrev = aux;
					current = current->getNext();
				}

				delete prevPrev->getNext();
				prevPrev->setNext(NULL);
				Tail = prevPrev;
			}
		}
	}

};
