#include "Motorista.h"
#include <string.h>
#include <iostream>

using namespace std;

Motorista::Motorista()
{
	strcpy(nome, " ");
	CPF=diasViagem=-1;
	salFixo= 0.0;
	valDiaria= 100.00;
}

void Motorista::setNome(char name[])
{
	strcpy(nome, name);
}

void Motorista::setCpf(int cpf)
{
	CPF= cpf;
}

void Motorista::setDiasViagem(int dias)
{
	diasViagem= dias;
}

void Motorista::setSalFixo(float sal)
{
	salFixo= sal;
}

/*static */void Motorista::setValDiaria(float sal)
{
	valDiaria=sal;
}

int Motorista::getDiasViagem()
{
	return diasViagem;
}

float Motorista::getSalFixo()
{
	return salFixo;
}

float Motorista::getValDiaria()
{
	return valDiaria;
}

float Motorista::valorRecebido(int dias, float salFix, float valDiaria)
{
	float valorTotal;
	
	
	valorTotal= (dias*valDiaria)+salFix;
	
	return valorTotal;
}

/*stringchar* Aluno::getNome()
{
	return Nome;
}

/*
VetorThing::VetorThing(int n)
{
	V= new int [n];
	
	for(int i=0; i<n; i++)
	{
		V[i]=0;
	}
	
	N=n;
}
*/
