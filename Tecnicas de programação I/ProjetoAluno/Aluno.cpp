#include "Aluno.h"
#include <iostream>
#include <string.h>

using namespace std;

void Aluno::setudo(int M,  float N, char Name[])
{
	Mat= M;
	Nota= N;
	strcpy(Nome, Name);
}

void Aluno::setMatricula(int M)
{
	Mat= M;
}

int Aluno::getMatricula()
{
	return Mat;
}

float Aluno::getNota()
{
	return Nota;
}

char* Aluno::getNome()
{
	return Nome;
}

void Aluno::alunoDel()
{
	Mat=-2;
	Nota=0.0;
	strcpy(Nome, "");
}

Aluno::Aluno()
{
	Mat=-2;
	Nota=0.0;
	strcpy(Nome, "");
}

int VetorThing::BuscaBin(int *V, int N, int x)
{
	int M;
	int PI=0;
	int PF=N-1;
	
	while(PI<PF)
	{
		M=(PI+PF)/2;
		
		if(x>V[M])
		{
			PI= M+1;
		}
		
		else
		{
			PF= M;
		}
		
		if(V[PI]==x)
		{
			return PI; //posicao 
		}
		
		return -1;
	}
}
