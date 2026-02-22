#include <iostream>

using namespace std;

//Aluno: José Enrique Balieiro Quaresma

class Agenda
{
	private:
		string contatos[3];
		
	public:
		friend Agenda operator + (Agenda a, Agenda b);	
		friend ostream &operator << (ostream &, Agenda &);
    	friend istream &operator >> (istream &, Agenda &);
};

Agenda operator + (Agenda a, Agenda b)
{
	Agenda c;
	
	for(int i=0; i<3; i++)
	{
		if(i==2)
		{
			c.contatos[i]= a.contatos[i] + ", " + b.contatos[i]; 
		}
		
		else
		{
			c.contatos[i]= a.contatos[i] + ", " + b.contatos[i] + ", "; 
		}
		
	}
	
	return c;
}

ostream &operator << (ostream & saida, Agenda &v)
{
	for(int i=0; i<3; i++)
	{
		saida << v.contatos[i];
	}

	return saida;
}

istream &operator >> (istream & entrada, Agenda &v)
{
	for(int i=0; i<3; i++)
	{
		entrada >> v.contatos[i];
	}
	
	return entrada;
}

int main()
{
	Agenda a, b, c;
	
	cout << "Digite 3 nomes de contatos para A: " << endl;
	cin >> a;
	
	cout << "Digite 3 nomes de contatos para B: " << endl;;
	cin >> b;
	
	c= a+b;
	
	cout << "Lista concatenada: " << endl;
	cout << c;
	
	return 0;
}
