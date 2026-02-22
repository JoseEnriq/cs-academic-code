#include <iostream>
#include <string.h>
#include <fstream>
#include "Motorista.h"

using namespace std;

int main() 
{
	char nome[40];
	int CPF, diasViagem;
	float salFixo, valDiaria;
	
	Motorista vet[100];
	
	do
	{
		
		ofstream File.open("Motor.dat", ios::out | ios::binary)
		
		cout << "Digite o CPF: " << endl;
		cin >> CPF;
		
		if(CPF!=-1)
		{
			int i=0;
			vet[i].setCpf(CPF);
			
			cout << "Digite o nome do motorista: " << endl;
			cin.ignore();
			cin.getline(nome, 39);
			vet[i].setNome(nome);
			
			cout << "Digite o salario fixo: " << endl;
			cin >> salFixo;
			vet[i].setSalFixo(salFixo);
			
			cout << "Digite os dias de viagem: " << endl;
			cin >> diasViagem;
			vet[i].setDiasViagem(diasViagem);
			
			vet[i].setValDiaria(100.00);
			
			FIle.write((const char*)(&vet[i]), sizeof(vet[i]));
			
			cout << "O valor que o motorista recebeu e de: ";
			cout << vet[i].valorRecebido(vet[i].getDiasViagem(), vet[i].getSalFixo(), vet[i].getValDiaria());
			cout << endl;
			
			i++;
		}

	}while(CPF=-1);
	
	return 0;
}
