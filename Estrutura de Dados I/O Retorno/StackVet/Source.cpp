#include "StackVet.h"

int main()
{
	StackVet s;

	if (s.isEmpty())
		cout << "vazio" << endl;

	s.push(10);
	s.push(20);
	s.push(30);

	s.Listar();
	cout << endl;

	cout << s.pop() << endl;

	if (s.isFull())
		cout << "cheio" << endl;

	else
		cout << "nao cheio" << endl;

	s.Listar();
}