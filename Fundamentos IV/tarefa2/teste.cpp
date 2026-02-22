#include <string>
#include <iostream>
using namespace std;

class Excecao
{
private:
	int valor;
public:
	Excecao(int a);
	int getValor() { return valor; }
	void setValor(int x);
};

Excecao::Excecao(int a) :valor(0)
{
	setValor(a);
}
void Excecao::setValor(int x) {
	if (x <= 0)
		throw string("Valor tem que ser positivo.");
	valor = x;
}

int main()
{
	Excecao e1(-2);
	try
	{
		e1.setValor(3);
		cout << "Valor: " << e1.getValor() << endl;
	}
	catch (string msg)
	{
		cout << "Erro: " << msg << endl;
	}

	cout << "Terminou tudo normal" << endl;
}


