#include "ListaProduto.h"
#include "ProdutoClasse.h"
#include <iostream>


int main()
{
	ListaProduto <ProdutoClasse> l;

	l.fazerLista(l);

	cout << l.verificaProduto(1);

	return 0;
}