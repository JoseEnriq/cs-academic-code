#include "Matriz.h"
#include <iostream>
#include <fstream>

using namespace std;

Matriz::Matriz(int l, int c)
{
	M= new int*[l];
	
	for(int i=0; i<l; i++)
	{
		M[i]= new int [c];
	}
	
	for(int i=0; i<l; i++)
	{
		for(int j=0; j<c; j++)
		{
			M[i][j]=0;
		}
	}
	
	L= l;
	C= c;
}

Matriz::~Matriz()
{
	for(int i=0; i<L; i++)
	{
		delete [] M[i];
	}
	
	delete[] M;
}

void Matriz::setMatriz()
{
	ofstream File;
	File.open("MatrizIn.txt", ios::out);
	
	if(!File)
	{
		cout << "nao abriu" << endl;
	}
	
	for(int i=0; i<L; i++)
	{
		for(int j=0; j<C; j++)
		{
			cin >> M[i][j];
			File << M[i][j] << " ";
		}
		
		File << endl;
	}
	
	File.close();
}

void Matriz::getMatriz()
{
	ofstream File;
	File.open("MatrizOut.txt", ios::out);
	
	if(!File)
	{
		cout << "Nao abriu" << endl;
	}
	
	for(int i=0; i<L; i++)
	{
		for(int j=0; j<C; j++)
		{
			cout << M[i][j] << " ";
			File << M[i][j] << " ";
		}
		
		cout << endl;
		File << endl;
	}
	
	File.close();
}

bool Matriz::Soma(Matriz A, Matriz B)
{
	if(A.L!=B.L || A.C!=B.C)
	{
		return false;
	}
	// pode somar
	
	for(int i=0; i<L; i++)
	{
		for(int j=0; j<C; j++)
		{
			this-> M[i][j]= A.M[i][j] + B.M[i][j];
		}
	}
	
	return true;
}

bool Matriz::Subtracao(Matriz A, Matriz B)
{
	if(A.L!=B.L || A.C!=B.C)
	{
		return false;
	}
	
	for(int i=0; i<L; i++)
	{
		for(int j=0; j<C; j++)
		{
			this-> M[i][j]= A.M[i][j] - B.M[i][j];
		}
	}
	
	return true;
}

bool Matriz::Multiplica(Matriz A, Matriz B)
{
	if(A.C!=B.L)
	{
		return false;
	}
	
	for(int i=0; i<A.L; i++)
	{
		for(int j=0; j<B.C; j++)
		{
			this->M[i][j]= 0;
			
			for(int k=0; k<A.C; k++)
			{
				this-> M[i][j] += A.M[i][k] * B.M[k][j];
			}
		}
	}
	
	return true;
}

bool Matriz::TriangularSuperior()
{
	for(int i=0; i<L; i++)
	{
		for(int j=0; j<C; j++)
		{
			if(i>j && M[i][j]!=0)
				return false;
		}
	}
	
	return true;
}

bool Matriz::TriangularInferior()
{
	for(int i=0; i<L; i++)
	{
		for(int j=i+1; j<C; j++)
		{
			if(M[i][j]!=0)
				return false;
		}
	}
	
	return true;
	
}

bool Matriz::Simetrica()
{
	if(L!=C)
	{
		return false;
	}
	
	for(int i=0; i<L-1; i++)
	{
		for(int j=i+1; j<C; j++)
		{
			if(M[i][j]!=M[j][i])
			{
				return false;
			}
		}
	}
	
	return true;
}

bool Matriz::Identidade()
{
	int v= M[0][0];
	int j=0;
	
	for(int i=0; i<L; i++)
	{
		if(M[i][j]!=v)
		{
			return false;
		}
		
		j++;
	}
	
	return true;
}

bool Matriz::Transposta(Matriz &A)
{
	if(A.L > this->L || A.C > this->C)
		return false;
	
	for(int i=0; i<L; i++)
	{
		for(int j=0; j<C; j++)
		{
			this->M[i][j]= A.M[j][i];
		}
	}
}

void Matriz::Potencia(Matriz A)
{
	for(int i=0; i<L; i++)
	{
		for(int j=0; j<C; j++)
		{
			this-> M[i][j]= A.M[i][j] * A.M[i][j];
		}
	}
}

void Matriz::MultK(Matriz A, int k)
{
	for(int i=0; i<L; i++)
	{
		for(int j=0; j<C; j++)
		{
			this-> M[i][j]= A.M[i][j] * k;
		}
	}
}

bool Matriz::Igual(Matriz A, Matriz B)
{
	if(A.L!=B.L || A.C!=B.C)
	{
		return false;
	}
	
	for(int i=0; i<L; i++)
	{
		for(int j=0; j<C; j++)
		{
			if(A.M[i][j]!= B.M[i][j])
			{
				return false;
			}
		}
	}
	
	return true;
}
