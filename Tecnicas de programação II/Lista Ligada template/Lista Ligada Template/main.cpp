#include "ListaLigada.h"
#include <iostream>

using namespace std;

int main()
{
	ListaLigada <string> L;
	
	if (L.empty())
	{
		cout << "Lista vazia." << endl;
	}

	else
	{
		cout << "Lista nao vazia" << endl;
	}

	cout << endl;

	L.printLista();
	if (L.existe("Pao1"))
	{
		cout << "o elemento exite na lista" << endl;
	}

	else
	{
		cout << "nao existe na lista" << endl;
	}

	cout << endl;

	L.InserirFinal("Pao1");
	L.InserirFinal("Pao2");
	L.InserirFinal("Pao3");
	L.InserirFinal("Pao4");

	L.InserirInicio("Pao5");

	L.printLista();

	if (L.empty())
	{
		cout << "Lista vazia." << endl;
	}

	else
	{
		cout << "Lista nao vazia" << endl;
	}

	if (L.existe("Pao1"))
	{
		cout << "o elemento exite na lista" << endl;
	}

	else
	{
		cout << "nao existe na lista" << endl;
	}

	L.removerFinal();

	L.printLista();

	cout << "Tamanho da lista: " << L.tamanho() << endl;
	

	return 0;
}