#include <iostream>

using namespace std;

int *subsRetroativa(int *a, int *b, int n)
{
	int soma;
	int* x = new int[n];

	x[n - 1] = b[n - 1] / a[(n - 1) * n + n - 1];

	for (int i = n - 1 ; i >= 0; i--)
	{
		soma = 0;
		for (int j = i + 1; j < n; j++)
		{
			soma += a[i * n + j] * x[j];
		}

		x[i] = (b[i] - soma) / a[i * n + i];
	}

	return x;
}

int *subsProgressiva(int *a, int *b, int n)
{
	int soma;
	int* x = new int[n];

	for (int i = 0; i < n; i++)
	{
		soma = 0;

		for (int j = 0; j < i; j++)
		{
			soma += a[i * n + j] * x[j];
		}

		x[i] = (b[i] - soma) / a[i * n + i];
	}

	return x;
}

int main()
{
	int n, op;

	cout << "Tamanho da matriz: " << endl;
	cin >> n;

	int a[n][n], b[n];

	cout << "Matriz A: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}

	cout << "Vetor B: " << endl;

	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
	}

	cout << "1- Retroativa \n 2- Progressiva" << endl;
	cin >> op;

	int* vs;

	if (op == 1)
	{
		vs = subsRetroativa(a[0], b, n);
	}

	else
	{
		vs = subsProgressiva(a[0], b, n);
	}

	cout << "Vetor solucao: " << endl;

	for (int i = 0; i < n; i++)
	{
		cout << vs[i] << " ";
	}

	return 0;
}