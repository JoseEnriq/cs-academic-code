#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack()
{
	Top = NULL;//Top=0;
	N = 0;
}

bool Stack::Push(Thing* Dat)
{
	Node* P;
	P = Node::MontaNode(Dat);
	
	if(P)//if(P!=Null)
	{// tem node pra inserir.
		P->Next = Top;//(*P).Next=Top;
		Top = P;
		N++;
		return true;
	}
	
	return false;
}

bool Stack::Pop(Thing* Dat)
{
	Node* P;
	
	if(Top)
	{
		P = Top;
		Top = P->Next;
		Node::DesmontaNode(P, Dat);
		return true;
	}
	
	return false;
}

bool Stack::TOP(Thing* Dat)
{
	if(Top)
	{//A pilha não está vazia
		*Dat = Top->D;//o atributo D do nó que está apontado por Top;
		return true;
	}
	
	return false;
}

bool Stack::IsEmpty()
{
	return !Top;
}

void Stack::Clear()
{
	Node* P;
	
	while(Top)
	{
		P=Top;
		Top = P -> Next;
		delete P;
	}
	
	N=0;
}

void Stack::print()
{
	Node *aux;
    aux = Top;
    
    while (aux != NULL)
    {
        cout <<  aux->D.valor << endl;
        aux = aux->Next;
    }
}

Queue::Queue()
{
	Head=0;
	Tail=0;
	N=0;
}

bool Queue::IsEmpty()
{
	return !Head;
}

Queue::~Queue()
{
	this->Clear();	
}

bool Queue::Push(Thing* Dat)
{
	Node* P = Node::MontaNode(Dat);
	if(P)
	{//pode xuxar na fila
		if(Head)
		{
			Tail->Next = P;
		}
		else
		{
			Head = P;
		}
		Tail = P;
		P->Next = NULL;
		N++;
		return true;
	}
	return false;
}

bool Queue::Pop(Thing* Dat)
{
	if(Head)
	{//fila não vazia
		Node* P = Head;
		Head = Head->Next;
		Node::DesmontaNode(P, Dat);
		if(!Head)//Head==Null
		{
			Tail=NULL;
		}
		N--;
		return true;
	}
	return false;
}

bool Queue::Front(Thing* Dat)
{
	if(Head)
	{//fila não vazia
		*Dat = Head->D;
		return true;
	}
	return false;
}

bool Queue::Back(Thing* Dat)
{
	if(Head)
	{//fila não vazia
		*Dat = Tail->D;
		return true;
	}
	return false;
}

void Queue::Clear()
{
	Node* P;
	while(Head)//Head!=Null
	{
		P=Head;
		Head = Head->Next;
		delete P;
	}
	Tail=0;
	N=0;
}

/*
Thing Queue::Third(Thing *Dat)
{
	Queue aux;
	Queue q;
	Thing t;
	
	q.Front(&t);
	
	while(!q.IsEmpty() && t.get_K()!= 3 )
	{
		aux.Push(&t);
		q.Pop(&t);
		q.Pop(&t);
	}
	
	if(!q.empty())
	{
		q.Pop(&t);
	}
	
	while(!aux.empty())
	{
		aux.Front(&t);
		q.Push(&t);
		aux.Pop(&t);
	}	
	
	return t;
}
*/
