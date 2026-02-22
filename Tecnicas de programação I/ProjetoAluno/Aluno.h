#ifndef ALUNO_H
#define ALUNO_H
#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

class Aluno
{
	private:
		int Mat;
		float Nota;
		char Nome[40];
	
	public:
		Aluno();
		void setudo(int M, float N, char nome[]);
		void setMatricula(int M);
		int getMatricula();
		float getNota();
		char* getNome();
		void alunoDel();
		
};

class Indice
{
	public:
		int Mat;
		float Nota;
		char Nome[40];

	Indice(int matricula, float Nota, char name[])
	{
		Mat= matricula;
		this->Nota= Nota;
		strcpy(Nome, name);
	}
	
	bool operator <(Indice obj) const // sobrecarga de operadores
	{
        return (Mat <  obj.Mat);
	}

};

class VetorThing
{
	public:
		int BuscaBin(int *v, int T,int x);
		int N;
};

#endif


