#include "Numero.h"
#include <string.h>
#include <math.h>

using namespace std;

void Numero::setNum()
{
	cin >> num;
}
int Numero::getNum()
{
	return num;
}

void Numero::setNumString()
{
	cin >> numString;
}
string Numero::getNumString()
{
	return numString;
}

void Numero::setPertenceN(string Nstring)
{
	if(Nstring[0]=='-')
	{
		pertenceN= "Nao e natural";
	}
	
	else
	{
		pertenceN= "E natural";
	}
}
string Numero::getPertenceN()
{
	return pertenceN;
}

void Numero::setFat(int N)
{
	Fat=N;

	for(int i=N-1; i>=1; i--)
	{
		Fat= Fat* i;
	}
	
}
long long int Numero::getFat()
{
	return Fat;
}

void Numero::setNumPerfeito(long long int N)
{
	long long int soma=0;
	
	for(int i=1; i<N; i++)
	{
		if(N%i==0)
			soma+=i;
	}	
	
	if(soma==N)
		numPerfeito= 1; // é perfeito
	else
		numPerfeito= -1; // não e perfeito
}
long long int Numero::getNumPerfeito()
{
	return numPerfeito;
}

void Numero::setCapicua(string N)
{
	int tam= N.size();
	
	char copia[tam];
	
	for(int i=tam-1, j=0; i>=0; i--, j++)
	{
		copia[j]=N[i];
	}
	
	if(copia==N)
		capicua= "E uma capicua";
	
	else
		capicua= "Nao e uma capicua";
}
string Numero::getCapicua()
{
	return capicua;
}

void Numero::setQuadradoPerfeito(long long int N)
{
	long long int temp;
	
	temp= sqrt(N);
	
	if(temp*temp==N)
		quadradoPerfeito= 1; // é quadrado
	else
		quadradoPerfeito= -1; // não é quadrado
}
int Numero::getQuadradoPerfeito()
{
	return quadradoPerfeito;
}

void Numero::setPrimo(int N)
{
	int div=0;
	
	for(int i=1; i<=N; i++)
	{
		if(N%i==0)
		{
			div++;
		}
	}
	
	if(div==2)
		primo= 1; // é primo
	
	else
		primo= -1; // não e primo
}
int Numero::getPrimo()
{
	return primo;
}

void Numero::setMudancaBase(int N)
{
	cout << "Numero em hexadecimal: " << hex << N << endl;
	cout << "Numero em octal: " << oct << N << endl;
}

void Numero::setMDC(int N1, int N2)
{
	int resto;
	
	do{
		resto= N1%N2;
		
		N1= N2;
		N2= resto;
		
	} while(resto!=0);
	
	MDC= N1;
}
int Numero::getMDC()
{
	return MDC;
}

void Numero::setMMC(int N1, int N2)
{
	int resto, a, b;
	
	a= N1;
	b= N2;
	
	do{
		resto= a%b;
		
		a= b;
		b= resto;
		
	} while(resto!=0);
	
	MMC= (N1*N2)/a;
}
int Numero::getMMC()
{
	return MMC;
}

