#include <iostream>
#include "StackVet.h"

using namespace std;

int main()
{
	int tam, v, op;
	
	cout << "Digite o tamanho da pilha: " << endl;
	cin >> tam;
	
	StackVet pilha(tam); // cria objeto
	Thing num;
	
	
	while(tam!=0)
	{
		int i=0;
		
		cout << "Insira os valores" << endl;
	
		cin >> v;
	
		
		pilha.push(num);
		tam--;
	}
	
	cout << "Deseja ver o valor do topo sim(1) nao(2)" << endl;
	
	cin >> op;
	
	if(op==1)
	{
		if(pilha.top(&num)==true)
		{
			cout << "O valor que esta no topo e: " << pilha.getTop() << endl;
		}
		
		else
		{
			cout << "Nao a valor no topo." << endl;
		}
		
	}
	
	cout << "Deseja retirar o valor do topo? sim(1) nao(2)" << endl;
	
	cin >> op;
	
	if(op==1)
	{
		if(pilha.pop(&num)==true)
		{
			cout << "Valor retirado." << endl;
		}
		
		else
		{
			cout << "Nao ha um valor para ser retirado"  << endl;
		}
	}
	
	cout << "Deseja ver se a pilha esta cheia? sim(1) nao(2)" << endl;
	
	cin >> op; 
	
	if(op==1)
	{
		if(pilha.IsFull()==true)
		{
			cout << "A pilha esta cheia" << endl;
		}
		
		else
		{
			cout << "A pilha nao esta cheia" << endl;
		}
	}
	
	cout << "Deseja ver se a pilha esta vazia? sim(1) nao(2)" << endl;
	
	cin >> op;
	
	if(op==1)
	{
		if(pilha.IsEmpty()==true)
		{
			cout << "Esta vazia" << endl;
		}
		
		else
		{
			cout << "Nao esta vazia" << endl;
		}
	}
	
	cout << "Deseja ver os valores na pilha? sim(1) nao(2)" << endl;
	
	cin >> op;
	
	for(int i=0; i<tam; i++)
	{
		pilha.top(&num);
		cout << pilha.getTop() << endl;
		
		pilha.pop(&num);
	}
	
	return 0;	
}
