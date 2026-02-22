#pragma once
#include <iostream>
using namespace std;

class Aluno
{
private:
	int matricula;
	double nota1, nota2;
	string nome;

public:
	Aluno()
	{
		matricula = 0;
		nota1 = nota2 = 0.0;
		nome = " ";
	}

	void setTudo(int matricula, string nome, double nota1, double nota2)
	{
		this->matricula = matricula;
		this->nome = nome;
		this->nota1 = nota1;
		this->nota2 = nota2;
	}

	double getMedia()
	{
		return (nota1 + nota2) / 2;
	}

	void print()
	{
		cout << matricula << endl;
		cout << nota1 << endl;
		cout << nota2 << endl;
		cout << nome << endl;
	}

	int getMatricula()
	{
		return matricula;
	}

	string getNome()
	{
		return nome;
	}

	double getN1()
	{
		return nota1;
	}

	double getN2()
	{
		return nota2;
	}

};

