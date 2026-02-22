#include "Fila.h"
#include <iostream>

using namespace std;

Node* Node::MontaNode(Thing* Dat)
{
	Node* P = new Node;
	if (P)//if(P!=Null)
	{
		P->D = *Dat;
	}
	return P;
}

Node* Node::MontaNode(Thing* Dat)
{
	Node* P = new Node;
	if (P)//if(P!=Null)
	{
		P->D = *Dat;
	}
	return P;
}

bool ListDE::Push(Thing* Dat)
{
	Node* P = Node::MontaNode(Dat);
	if (P)
	{
		if (Head)
		{
			Head->Prev = P;
		}
		else
		{
			It = P;
		}
		P->Next = Head;
		Head = P;
		P->Prev = Null;
		N++;
		return true;
	}
	return false;
}

ListDE::ListDE()
{
	Head = It = NULL;
}