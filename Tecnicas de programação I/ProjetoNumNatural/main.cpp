#include <iostream>
#include <locale.h>
#include "Numero.h"

using namespace std;

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	Numero N;
	
	int op;
	
	cout << "Deseja realizar qual tipo de operação?" << endl;
	cout << "1. Verificar se um número pertence a N." << endl;
	cout << "2. Cacular o fatorial. " << endl;
	cout << "3. Descobrir se o número natural é um número perfeito." << endl;
	cout << "4. Calcular se o número natural é capicua." << endl;
	cout << "5. Verificar se o número natural é um quadrado perfeito." << endl;
	cout << "6. Verificar se é um número primo." << endl;
	cout << "7. Calcular a mudança de base do número naturais." << endl;
	cout << "8. Achar o máximo divisor comum entre dois números naturais." << endl;
	cout << "9. Encontrar o mínimo multiplo comum entre dois números naturais." << endl;
	cout << "10. Descobrir se dois números naturais são primos entre si." << endl;
	
	cin >> op;
	
	if(op==1)
	{
		cout << "Digite um número: " << endl;
		N.setNumString();
		
		N.setPertenceN(N.getNumString());
		
		cout << N.getPertenceN() << endl;
	}
	
	else if(op==2)
	{
		cout << "Digite um número: " << endl;
		N.setNum();
		
		N.setFat(N.getNum());
		
		cout << N.getFat() << endl;
	}
	
	else if(op==3)
	{
		cout << "Digite um número: " << endl;
		N.setNum();
		
		N.setNumPerfeito(N.getNum());
		
		if(N.getNumPerfeito()==1)
			cout << "O número é perfeito" << endl;
		
		else
			cout << "O número não é perfeito" << endl;
		
	}
	
	else if(op==4)
	{
		cout << "Digite um número: " << endl;
		N.setNumString();
		
		N.setCapicua(N.getNumString());
		
		cout << N.getCapicua() << endl;
	}
	
	else if(op==5)
	{
		cout << "Digite um número: " << endl;
		N.setNum();
		
		N.setQuadradoPerfeito(N.getNum());
		
		if(N.getQuadradoPerfeito()==1)
			cout << "O número é um quadrado perfeito" << endl;
		
		else
			cout << "O número não é um quadrado perfeito" << endl;
	}
	
	else if(op==6)
	{
		cout << "Digite um número: " << endl;
		N.setNum();
		
		N.setPrimo(N.getNum());
		
		if(N.getPrimo()==1)
			cout << "O número é primo" << endl;
			
		else
			cout << "O número não é primo" << endl;
	}
	
	else if(op==7)
	{
		cout << "Digite um número: " << endl;
		N.setNum();
		
		N.setMudancaBase(N.getNum());
	}
	
	else if(op==8)
	{
		cout << "Digite dois números: " << endl;
		int n1, n2;
		cin >> n1 >> n2;
		
		N.setMDC(n1,n2);
		
		cout << "O MDC é: ";
		cout << N.getMDC() << endl;
		
	}
	
	else if(op==9)
	{
		cout << "Digite dois números: " << endl;
		int n1, n2;
		cin >> n1 >> n2;
		
		N.setMMC(n1,n2);
		
		cout << "O MMC é: ";
		cout << N.getMMC() << endl;
	}
	
	else
	{
		cout << "Digite dois números: " << endl;
		int n1, n2;
		cin >> n1 >> n2;
		
		N.setMDC(n1,n2);
		
		if(N.getMDC()==1)
			cout << "São primos entre si" << endl;
		else
			cout << "Não são primos entre si" << endl;
	}
	
}
