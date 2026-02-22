#pragma once
#include <iostream>
#include "Aluno.h"
#include <string>
#include <fstream>

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
		
		while (temp != NULL)
		{
			cout << "Matricula: " << temp->valor.getMatricula() << endl;
			cout << "Nome: " << temp->valor.getNome() << endl;
			cout << "Nota 1:" << temp->valor.getN1() << endl;
			cout << "Nota 2:" << temp->valor.getN2() << endl << endl;
			temp = temp->next;
		}
	}

	int tamanho()
	{
		return tam;
	}

	bool excluir(int v)
	{
		Node<T>* temp = head;
		Node<T>* prev = NULL;

		if (temp != NULL && temp->valor.getMatricula() == v)
		{
			head = temp->next; 
			delete temp;           
			return true;
		}

		else
		{
			while (temp != NULL && temp->valor.getMatricula() != v)
			{
				prev = temp;
				temp = temp->next;
			}

			if (temp == NULL)
				return false;

			prev->next = temp->next;

			delete temp;
		}
	}

	void consultar(int v)
	{
		if (!isEmpty())
		{
			Node<T>* temp = head;
			while (temp)
			{

				if (temp->valor.getMatricula() == v)
				{
					cout << "Matricula encontrada" << endl;
					cout << "Matricula: " << temp->valor.getMatricula() << endl;
					cout << "Nome: " << temp->valor.getNome() << endl;
					cout << "Nota 1:" << temp->valor.getN1() << endl;
					cout << "Nota 2:" << temp->valor.getN2() << endl;
				}
				temp = temp->next;
			}
		}

		else
		{
			cout << "Matricula nao encontrada" << endl;
		}
	}
	
	void excluirLista()
	{
		ofstream arq("alunos.csv");
		if (!arq.is_open()) throw std::runtime_error("Nao foi possivel abrir o arquivo");

		arq << "matricula;nome;nota1;nota2" << endl;
		string m, n, n1, n2;

		Node<T>* current = head;
		Node<T>* next = NULL;

		while (current != NULL)
		{
			m = to_string(current->valor.getMatricula());
			n = current->valor.getNome();
			n1 = to_string(current->valor.getN1());
			n2 = to_string(current->valor.getN2());

			arq << m + ';' + n + ';' + n1 + ';' + n2 << endl;

			next = current->next;
			delete current;
			current = next;
		}

		head = NULL;

		arq.close();
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