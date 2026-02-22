#pragma once

class Thing
{
private:
	int v;
};

class Node
{
public:
	Thing* D;
	Node* Next;
	Thing* Prev;
	static Node* MontaNode(Thing* Dat);
	static void DesmontaNode(Node* P);
};

class FilaDE
{
	Node* Head;
	Node* It;
	int N;
public:
	ListDE();
	bool Pop(int k, Thing* Dat);
	bool Push(Thing* Dat);
	bool Search(int k, Thing* Dat);
	~ListDE();

};

