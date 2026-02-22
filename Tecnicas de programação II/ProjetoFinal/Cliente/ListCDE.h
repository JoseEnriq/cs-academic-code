#pragma once
#include <iostream>
#include "Pessoa.h"
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

	void listarClientes()
	{
		Pessoa f;
		
		Node<T>* temp = head;
		
		while (temp != NULL)
		{
			cout << "Codigo: " << temp->valor.getCodigo() << endl;
			cout << "Logradouro: " << temp->valor.getLogradouro() << endl;
			cout << "Setor: " << temp->valor.getSetor() << endl;
			cout << "Cidade: " << temp->valor.getCidade() << endl;
			cout << "Estado: " << temp->valor.getEstado() << endl;
			cout << "Telefone: " << temp->valor.getTelefone() << endl;
			cout << "Email: " << temp->valor.getEmail() << endl;

			char cpff[12];
			string str = temp->valor.getCpf();

			strcpy(cpff, str.c_str());
			if (f.validarCPF(cpff) == 1)
			{
				temp->valor.printFisica();
			}
			
			else
			{
				temp->valor.printJuridica();
			}
			
			cout << endl;

			//if() preciso fazer ainda o if para o caso se for cpf ou cpnj
			temp = temp->next;
		}

		
	}

	int tamanho()
	{
		return tam;
	}

	bool removerCliente(int v)
	{
		Node<T>* temp = head;
		Node<T>* prev = NULL;

		if (temp != NULL && temp->valor.getCodigo() == v)
		{
			head = temp->next; 
			delete temp;           
			return true;
		}

		else
		{
			while (temp != NULL && temp->valor.getCodigo() != v)
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

	bool consultarCliente(int v)
	{
		if (!isEmpty())
		{
			Pessoa f;
			Node<T>* temp = head;
			while (temp)
			{

				if (temp->valor.getCodigo() == v)
				{
					cout << "Codigo encontrado" << endl;
					cout << "Codigo: " << temp->valor.getCodigo() << endl;
					cout << "Logradouro: " << temp->valor.getLogradouro() << endl;
					cout << "Setor: " << temp->valor.getSetor() << endl;
					cout << "Cidade: " << temp->valor.getCidade() << endl;
					cout << "Estado: " << temp->valor.getEstado() << endl;
					cout << "Telefone: " << temp->valor.getTelefone() << endl;
					cout << "Email: " << temp->valor.getEmail() << endl;
					
					char cpff[12];
					string str = temp->valor.getCpf();

					strcpy(cpff, str.c_str());
					if (f.validarCPF(cpff) == 1)
					{
						temp->valor.printFisica();
					}

					else
					{
						temp->valor.printJuridica();
					}

					cout << endl;

					return true;
					//if() preciso fazer ainda o if para o caso se for cpf ou cpnj
					// vai precisar do validador de cpf e cnpj
				}
				temp = temp->next;
			}

			cout << "Codigo nao encontrado." << endl;
			return false;
		}

		else
		{
			cout << "Codigo nao encontrado." << endl;
			return false;
		}
	}

	bool verificaCodigo(int v)
	{
		Node<T>* temp = head;
		while (temp)
		{
			if (temp->valor.getCodigo() == v)
			{
				return true; // codigo ja existe
			}

			temp = temp->next;
		}

		return false; // codigo nao existe
	}

	bool verificaCpfExiste(string v)
	{
		Node<T>* temp = head;
		while (temp)
		{
			if (temp->valor.getCpf() == v)
			{
				return true; // cpf ja existe
			}

			temp = temp->next;
		}

		return false; // cpf nao existe
	}

	bool verificaCnpjExiste(string v)
	{
		Node<T>* temp = head;
		while (temp)
		{
			if (temp->valor.getCnpj() == v)
			{
				return true; // cpnj ja existe
			}

			temp = temp->next;
		}

		return false; // cpnj nao existe
	}
	
	void excluirLista() // precisa ser atualizado
	{
		ofstream arq("Clientes.csv");
		if (!arq.is_open()) throw std::runtime_error("Nao foi possivel abrir o arquivo");

		arq << "codigo;logradouro;setor;cidade;estado;telefone;email;cpf;nome;celular;cnpj;razaoSocial;nomeContato" << endl;
		string cod,log, st, cid, es, tel, em, cpf, n, cel, cnpj, rs, nc;

		Node<T>* current = head;
		Node<T>* next = NULL;

		while (current != NULL)
		{
			Pessoa f;
			cod = to_string(current->valor.getCodigo());
			log = current->valor.getLogradouro();
			st = current->valor.getSetor();
			cid = current->valor.getCidade();
			es = current->valor.getEstado();
			tel = current->valor.getTelefone();
			em = current->valor.getEmail();
			cpf = current->valor.getCpf();
			n = current->valor.getNome();
			cel = to_string(current->valor.getCelular());
			cnpj = current->valor.getCnpj();
			rs = current->valor.getRazaoSocial();
			nc = current->valor.getNomeContato();
			
			char cpff[12];
			strcpy(cpff, cpf.c_str());

			if (f.validarCPF(cpff)==1)
			{
				arq << cod + ';' + log + ';' + st + ';' + cid + ';' + es + ';' + tel + ';' + em + ';' + cpf + ';' + n + ';' + cel + ';' + "-1" + ';' + "-1" + ';' + "-1" << endl;
			}

			else
			{
				arq << cod + ';' + log + ';' + st + ';' + cid + ';' + es + ';' + tel + ';' + em + ';' + "-1" + ';' + "-1" + ';' + "-1" + ';' + cnpj + ';' + rs + ';' + nc << endl;
			}
			

			next = current->next;
			delete current;
			current = next;
		}

		head = NULL;

		arq.close();
	}
		
	//provavelmente nao deve ta funcionando o front e o back
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