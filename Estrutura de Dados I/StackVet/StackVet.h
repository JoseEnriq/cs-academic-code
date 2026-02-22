#ifndef STACKVET_H
#define STACKVET_H

class Thing
{
	public: 
		int valor;
};

class StackVet
{
	private:
		Thing *Vet;
		int Top;
		int N;
	
	public:
		StackVet(int n);
		~StackVet();
		
		bool push(Thing T);
		bool pop(Thing* T);
		bool top(Thing* T);
		bool IsFull();
		bool IsEmpty();
		
		int getTop();
};


#endif
