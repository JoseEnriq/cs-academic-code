#include <iostream>

using namespace std;

//Aluno: José Enrique Balieiro Quaresma

class Ponto
{
	private:
		float x, y;
    
    public:
    	friend ostream &operator << (ostream &, Ponto &);
    	friend istream &operator >> (istream &, Ponto &);
    	friend float operator + (Ponto &);
    	friend float operator - (Ponto &);
    	friend float operator / (Ponto &, float v);
    	friend float operator * (Ponto &);
    		
};

ostream &operator << (ostream & saida, Ponto &p)
{
	saida << "x = " << p.x << endl;
	saida << "y = " << p.y << endl;
	return saida;
}

istream &operator >> (istream & entrada, Ponto &p)
{
	entrada >> p.x >> p.y;
	return entrada;
}

// os pontos x e y sempre serão somados
float operator + (Ponto &p, float v)
{
	return (p.x + p.y)+v; 
}

float operator - (Ponto &p, float v)
{
	return (p.x + p.y)-v;
}

float operator / (Ponto &p, float v)
{
	return (p.x + p.y)/v;
}

float operator * (Ponto &p, float v)
{
	return (p.x + p.y)*v;
}


int main()
{
	Ponto p;
	int op;
	
	cout << "Digite os valores do ponto x,y: " << endl;
	cin >> p;
	
	cout << "Deseja fazer qual tipo de operação? " << endl;
	cout << "1. Soma" << endl;
	cout << "2. Subtracao" << endl;
	cout << "3. Divisao" << endl;
	cout << "4. Multiplicacao" << endl;
	
	cin >> op;
	float v;
	
	if(op==1)
	{
		cout << "Numero a ser somado: ";
		cin >> v;
		
		cout << "Resultado:";
		cout << (p+v) << endl;
	}
	
	else if(op==2)
	{
		cout << "Numero a ser subtraido: ";
		cin >> v;
		
		cout << "Resultado: ";
		cout << (p-v) << endl;;
	}
	
	else if(op==3)
	{
		cout << "Numero a ser divido: ";
		cin >> v;
		
		cout << "Resultado: ";
		cout << (p/v);
	}
	
	else
	{
		cout << "Numero a ser multiplicado: ";
		cin >> v;
		
		cout << "Resultado: ";
		cout << (p*v);
	}
	
	cout << endl;
	
	cout << "Valor de x e y: " << endl;
	cout << p;
	
	
	return 0;
}