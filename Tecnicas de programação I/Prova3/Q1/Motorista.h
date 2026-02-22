#ifndef MOTORISTA_H
#define MOTORISTA_H
#include <iostream>

class Motorista
{
	private:
		char nome[40];
		int CPF, diasViagem;
		float salFixo;
		/*static */float valDiaria;
		
	public:
		Motorista();
		void setNome(char name[]);
		void setCpf(int cpf);
		void setDiasViagem(int dias);
		void setSalFixo(float salario);
		/*static */void setValDiaria(float diaria);
		
		int getDiasViagem();
		float getValDiaria();
		float getSalFixo();
		float valorRecebido(int dias, float salFix, float diaria);
		
		
};

#endif
