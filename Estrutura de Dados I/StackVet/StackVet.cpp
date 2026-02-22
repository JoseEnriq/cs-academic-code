#include "StackVet.h"

StackVet::StackVet(int n)
{
	Vet= new Thing[n];
	Top=-1;
	N=n;
}

StackVet::~StackVet()
{
	delete []Vet;
}

bool StackVet::push(Thing T)
{
	if(Top==N-1)
		return false;
		
	Top++;
	Vet[Top]=T;
	
	return true;
}

bool StackVet::pop(Thing *T)
{
	if(Top==-1)
		return false;
		
	*T= Vet[Top];
	Top--;
	
	return true;
}

bool StackVet::top(Thing *T)
{
	if(Top==-1)
		return false;
		
	*T= Vet[Top];
	
	return true;
	
}

bool StackVet::IsFull()
{
	return Top==N-1;
}

bool StackVet::IsEmpty()
{
	return Top==-1;
}

int StackVet::getTop()
{
	return Top;
}
