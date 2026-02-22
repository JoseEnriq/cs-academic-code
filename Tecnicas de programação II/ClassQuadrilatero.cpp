#include <iostream>

using namespace std;

//Aluno: José Enrique Balieiro Quaresma

class Quadrilatero
{
	private:
		string Tquadri;
		int lados;
		
	public:
		friend istream &operator >> (istream &, Quadrilatero&);
		friend ostream &operator << (ostream &, Quadrilatero&);
		friend Quadrilatero operator + (Quadrilatero a, Quadrilatero b);
		friend Quadrilatero operator - (Quadrilatero a, Quadrilatero b);
		
		friend Quadrilatero operator + (Quadrilatero a, int n);
		friend Quadrilatero operator - (Quadrilatero a, int n);
		friend Quadrilatero operator * (Quadrilatero a, int n);
		friend Quadrilatero operator / (Quadrilatero a, int n);
};

istream &operator >> (istream & entrada, Quadrilatero &q)
{
	cout << "Digite o tipo do quadrilatero: ";
	entrada >> q.Tquadri;
	
	cout << "Digite o numero de lados: ";
	entrada >> q.lados;
	
	return entrada;
}

ostream &operator << (ostream & saida, Quadrilatero &q)
{
	
	if(q.lados==-1)
	{
		saida << "Nao foi possivel realizar a operacao" << endl;
	}
	
	else
	{
		saida << "Tipo de quadrilatero: " << q.Tquadri << endl;
		saida << "Soma: " << q.lados << endl;
	}
	
	return saida;
}

Quadrilatero operator + (Quadrilatero a, Quadrilatero b)
{
	Quadrilatero c;
	
	if(a.Tquadri==b.Tquadri)
	{
		c.lados= a.lados + b.lados;
	}
	
	else
	{
		c.lados= -1; //-1 significa que não foi possivel somar os lados
	}
	
	return c;
}

Quadrilatero operator - (Quadrilatero a, Quadrilatero b)
{
	Quadrilatero c;
	
	if(a.Tquadri==b.Tquadri)
	{
		c.lados= a.lados + b.lados;
	}
	
	else
	{
		c.lados= -1; //-1 significa que não foi possivel somar os lados
	}
	
	
	return c;
}

Quadrilatero operator + (Quadrilatero a, int n)
{
	Quadrilatero c;
	
	c.lados= a.lados+n;
	
	return c;
}

Quadrilatero operator - (Quadrilatero a, int n)
{
	Quadrilatero c;
	
	c.lados= a.lados+n;
	
	return c;
}

Quadrilatero operator * (Quadrilatero a, int n)
{
	Quadrilatero c;
	
	c.lados= a.lados+n;
	
	return c;
}

Quadrilatero operator / (Quadrilatero a, int n)
{
	Quadrilatero c;
	
	c.lados= a.lados+n;
	
	return c;
}

int main()
{
	Quadrilatero a, b, c;	
	
	cin >> a;
	cin >> b;
	
	c= a+b;
	
	cout << c;
	
	cout << "Digite um valor para somar com os lados do Quadrilatero A: " << endl;
	int v;
	cin >> v;
	
	c= a*v;// a soma com um valor qualquer irá funcionar com qualquer operador que for colocado
	//c= a+v;
	//c= a-v;
	//c= a/v
	
	cout << c;
	
	return 0;
}
