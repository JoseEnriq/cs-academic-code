#include <iostream>

using namespace std;

class Lista
{
private:
	string lista[10];
	string lista2[10];
	int tam = 0;
	int tam2 = 0;

public:
	void pushFront(string valor)
	{
		lista[tam] = valor;
		tam++;
	}

	void pushFrontL2(string valor)
	{
		lista2[tam2] = valor;
		tam2++;
	}

	int tamanho()
	{
		return tam;
	}
	
	void imprimirLista()
	{
		for (int i = 0; i < tam; i++)
		{
			cout << lista[i] << endl;
		}
	}
	/*
	void interseccao()
	{
		for (int i = 0; i < tam; i++)
		{
			for (int k = 0; k < tam; k++)
			{
				if (lista[i] == lista2[k])
				{
					vetInter[i] = lista2[k];
					cout << vetInter[i] << endl;
				}
			}
		}
	}
	*/
	string concatenar()
	{
		string msg;
		for (int i = 0; i < tam; i++)
		{
			msg += lista[i] + lista2[i];
		}
		
		return msg;
	}

	string intercalar()
	{
		string valorIntercalado;

		for (int i = 0; i < tam + tam2; i++)
		{
			valorIntercalado += lista[i] + " " + lista2[i];
		}

		return valorIntercalado;
	}

	/*
	void inverterLista()
	{
		int pos = tam - 1;
		for (int i = 0; i < tam; i++)
		{
			
			listaInvertida[i] = lista[pos];
			cout << lista[pos] << endl;
			pos--;

		}
	}*/
};


int main()
{
	Lista l;

	l.pushFront("0");
	l.pushFront("2");
	l.pushFront("4");

	l.pushFrontL2("1");
	l.pushFrontL2("3");
	l.pushFrontL2("5");

	cout << l.tamanho() << endl << endl;

	cout << "Lista Normal:" << endl;
	l.imprimirLista();
	cout << endl << endl;
	/*
	cout << "Lista Invertida" << endl;
	l.inverterLista();
	

	l.interseccao();
	
	cout << "concatenado: " << endl;
	cout << l.concatenar() << endl;
	*/

	cout << "intercalado: " << endl;
	cout << l.intercalar() << endl;


	return 0;
}

int qtdNos(struct Node* node)
{
	int res = 0;
	while (node != NULL)
	{
		res++;
		node = node->next;
	}
	return res;
}