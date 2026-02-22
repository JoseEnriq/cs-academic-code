#include "Q2.h"
#include <iostream>

using namespace std;

void Q2::setDia(int D)
{
	while(D<1 || D>31)
	{
		cout << "Digite um dia valido" << endl;
		cin >> D;
	}
	dia= D;
}

int Q2::getDia()
{
	return dia;
}

void Q2::setMes(int M)
{
	while(M<1 || M>12)
	{
		cout << "Digite um mes valido" << endl;
		cin >> M;
	}
	mes= M;
}

int Q2::getMes()
{
	return mes;
}

void Q2::setAno(int A)
{
	while(A>2021)
	{
		cout << "Digite um ano valido" << endl;
		cin >> A;
	}
	ano= A;
}

int Q2::getAno()
{
	return ano;
}

void Q2::setVolta(int D, int M, int A)
{
	if(D>1)
		cout << "Dia: " <<  D-1 << endl;
	else
		cout << "Dia:" << 31 << endl;;
	
	if(D==1)
	{
		if(M==1)
			cout << "Mes: " <<  12 << endl;
		
		else
			cout << "Mes: " << M-1 << endl;
	}	
	else
		cout << "Mes: " << M << endl;
	
	if(D==1 && M==1)
		cout << "Ano: " << A-1 << endl;
	else
		cout << "Ano: " << A << endl;
}


Q2::Q2()
{	
	dia=mes=ano=0;
}
