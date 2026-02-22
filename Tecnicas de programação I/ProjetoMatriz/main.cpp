#include <iostream>
#include <locale.h>
#include <fstream>
#include "Matriz.h"

using namespace std;

int main() 
{
	setlocale(LC_ALL, "portuguese");
	
	int lA, cA, op;
	int lB, cB;
	
	cout << "Digite o tamanho da Matriz: " << endl;
	cin >> lA >> cA;
	
	Matriz A(lA, cA);
	
	cout << "Digite os valores da matriz: " << endl;
	A.setMatriz();
	
	cout << "Deseja realizar qual operacao? " << endl;
	cout << "1. Somar duas matrizes" << endl;
	cout << "2. Subtrair duas matrizes" << endl;
	cout << "3. Multiplicar duas matrizes" << endl;
	cout << "4. Verificar se uma matriz e triangular superior" << endl;
	cout << "5. Verificar se uma matriz e trangular inferior" << endl;
	cout << "6. Verificar se uma matriz é Simetrica" << endl;
	cout << "7. Verificar se uma matriz é Anti-Simetrica" << endl;
	cout << "8. Verificar se uma matriz é identidade" << endl;
	cout << "9. Calcular a matriz transposta" << endl;
	cout << "10. Calcular a potenciação de uma matriz" << endl;
	cout << "11. Multiplicar a matriz por um valor k" << endl;
	cout << "12. Saber se duas matrizes são iguais" << endl;
	cout << "13. Saber se duas matrizes são diferentes" << endl; 
	
	cin >> op;
	
	if(op==1 || op==2 ||  op==3 || op==12 || op==13)
	{
		cout << "Digite o tamanho da outra Matriz: " << endl;
		cin >> lB >> cB;
		
		Matriz B(lB, cB);
		
		cout << "Digite os valores da matriz: " << endl;
		B.setMatriz();
		
		if(op==1)
		{
			Matriz C(lB, cB);
			
			if(!C.Soma(A,B))
				cout << "Nao foi possivel realizar a soma" << endl;
			
			else
			{
				cout << "Soma das matrizes: " << endl;
				C.getMatriz();
			}
		}
		
		else if(op==2)
		{
			Matriz C(lB, cB);
			
			if(!C.Subtracao(A,B))
				cout << "Não foi possivel realizar a subtração" << endl;
				
			else
			{
				cout << "Subtração das matrizes: " << endl;
				C.getMatriz();
			}
		}
		
		else if(op==3)
		{
			Matriz C(lA, cB);
			
			if(!C.Multiplica(A,B))
				cout << "Nao foi possivel realizar a multiplicacao" << endl;
				
			else
			{
				cout << "Multiplicacao das matrizes: " << endl;
				C.getMatriz();
			}
		}
		
		else if(op==12)
		{
			if(!A.Igual(A, B))
			{
				cout << "Não são iguais" << endl;
			}
			
			else
			{
				cout << "São iguais" << endl;
			}
		}
		
		else
		{
			if(!A.Igual(A,B))
			{
				cout << "São diferentes" << endl;
			}
			
			else
			{
				cout << "Não são diferentes" << endl;
			}
		}
	}
	
	else if(op==4 || op==5 || op==6 || op==7 || op==8 || op==9 || op==10 || op==11)
	{
		if(op==4)
		{
			if(!A.TriangularSuperior())
			{
				cout << "Não é triangular superior" << endl;
			}
			
			else
			{
				cout << "É triangular" << endl;
			}
			
		}
		
		else if(op==5)
		{
			if(!A.TriangularInferior())
			{
				cout << "Não é Triangular inferior" << endl;
			}
			
			else
			{
				cout << "É triangular inferior" << endl;
			}
		}
		
		if(op==6)
		{
			if(!A.Simetrica())
			{
				cout << "Não é simetrica" << endl;
			}
			
			else
			{
				cout << "É simetrica" << endl;
			}
		}
		
		else if (op==7)
		{
			if(!A.Simetrica())
			{
				cout << "É anti-simetrica" << endl;
			}
			
			else
			{
				cout << "Não é anti-simetrica" << endl;
			}
		}
		
		else if(op==8)
		{
			if(!A.Identidade())
			{
				cout << "Não é identidade" << endl;
			}
			
			else
			{
				cout << "É identidade" << endl;
			}
		}
		
		else if(op==9)
		{
			Matriz B(cA, lA);
			
			B.Transposta(A);
			
			cout << "Matriz Transposta: " << endl;
			B.getMatriz();
		}
		
		else if(op==10)
		{
			Matriz B(lA, cA);
			
			B.Potencia(A);
			
			cout << "Potenciação da matriz: " << endl;
			B.getMatriz();
		}
		
		else
		{
			Matriz B(lA, cA);
			int k;
			
			cout << "Deseja multiplicar por qual valor a matriz? " << endl;
			cin >> k;
			
			B.MultK(A, k);
			
			cout << "Matriz multiplicada por k: " << endl;
			B.getMatriz();
		}
	}
	
	return 0;
}
