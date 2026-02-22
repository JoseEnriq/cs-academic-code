#include <iostream>
#include <iomanip>
//Aluno: José Enrique Balieiro Quaresma
using namespace std;
double matrizA[100][100];

void escalonamento(double coeficiente[100][100], float* indp, int n)
{
	for (int i = 0; i < n; i++) // matriz aumentanda
	{
		for (int j = 0; j < n; j++)
		{
			matrizA[i][j] = coeficiente[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		matrizA[i][n] = indp[i];
	}

	for (int i = 0; i < n - 1; i++) //matriz escalonada
	{
		for (int j = i + 1; j <= n; j++)
		{
			double m = matrizA[j][i] / matrizA[i][i];

			for (int k = 0; k <= n; k++)
			{
				matrizA[j][k] = matrizA[j][k] - m * matrizA[i][k];
			}
		}
	}
}

void retroativa(double* res, int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		double sum = 0;

		for (int j = i + 1; j < n; j++)
		{
			sum += matrizA[i][j] * res[j];
		}

		res[i] = (matrizA[i][n] - sum) / matrizA[i][i];
	} 
}

int main()
{
	int n;

	cout << "Dimensao do sistema: " << endl;
	cin >> n;

	double coeficiente[100][100];
	float* indp = new float[n];

	cout << "Matriz dos coeficientes: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> coeficiente[i][j];
		}
	}

	cout << "Vetor dos termos independentes: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> indp[i];
	}

	cout << "Valores da solucao para o calculo de erro: " << endl; 
	double* resp = new double[n];
	for (int k = 0; k < n; k++)
	{
		cin >> resp[k];
	}

	double* solucao = new double[100];

	escalonamento(coeficiente, indp, n);

	retroativa(solucao, n);

	cout << "Matriz escalonada: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			cout << fixed << setprecision(5);
			cout << matrizA[i][j] << " ";
		}

		cout << endl << endl;;
	}

	cout << "Conjunto solucao: " << endl;

	for (int i = 0; i < n; i++)
	{ 
		cout << fixed << setprecision(10);
		cout << "X" << i + 1 << ": " << solucao[i] << " Erro: " << solucao[i] - (resp[i]) << endl; 
	}
}