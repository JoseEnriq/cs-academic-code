#ifndef STACKFILA_H
#define STACKFILA_H
#include <iostream>
using namespace std;

class Thing
{
	public:
		char ficha[3];
};

class Node
{
	public:
		Thing D;
		Node* Next;
		
		static Node* MontaNode(Thing* Dat)
		{
			Node* P = new Node;

			if(P)//if(P!=Null)
			{
				P->D = *Dat;
			}
			
			return P;
		}
		
		static void DesmontaNode(Node* P, Thing* Dat)
		{
			if(P)
			{
				*Dat = P->D;
				delete P;
			}
		}
		
};

class Stack
{
	public:
		Node* Top;
		int N;
		
		Stack();
		//~Stack();
		bool Push(Thing* Dat);
		bool Pop(Thing* Dat);
		bool TOP(Thing* Dat);
		bool IsEmpty();
		void Clear();
		// void ListaPilha();
	
};

class Queue
{
	private:
		Node* Head;
		Node* Tail;
		int N;
		
	public:
		Queue();
		bool Push(Thing* Dat);
		bool Pop(Thing* Dat);
		bool Front(Thing* Dat);
    	bool Back(Thing* Dat);
		bool IsEmpty();
		void Clear();
		~Queue();
		
};

/*
Struct {
	char Jogador; // Os possíveis valores são { 1 , 2 , 3 , 4 }
	char Cor; //  Os possíveis valores são  { 'A' , 'V' , 'R' , 'B', 'P' }
	char Torre; //  Os possíveis valores são { 1 , 2 , 3 , 4 , 5 , 6 }
}
*/


#endif
