#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;

class Thing
{
	public:
		int valor;
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
		bool Push(Thing* Dat);
		bool Pop(Thing* Dat);
		bool TOP(Thing* Dat);
		bool IsEmpty();
		void Clear();
		void print();
	
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
		Thing Third();
		
};

#endif
