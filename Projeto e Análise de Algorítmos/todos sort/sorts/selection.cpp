
// selection
#include <iostream>
#include <cstdlib>
#include <chrono>
#include <vector>

using namespace std;

void troca(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int vet[], int n)
{
	int i, j, min_idx;

	for (i = 0; i < n - 1; i++)
	{
		min_idx = i;

		for (j = i + 1; j < n; j++)
		{
			if (vet[j] < vet[min_idx])
			{
				min_idx = j;
			}

			if (min_idx != i)
			{
				troca(&vet[min_idx], &vet[i]);
			}
		}
	}
}

void printVet(int vet[], int tam)
{
	int i;
	for (i = 0; i < tam; i++)
	{
		cout << vet[i] << " ";
	}

	cout << endl;
}


int main()
{
	auto inicio = std::chrono::high_resolution_clock::now();
	int vet[10000];
	for (int i = 0; i < 10000; i++) {
		vet[i] = rand() % 100;
	}
	int n = sizeof(vet) / sizeof(vet[0]);

	selectionSort(vet, n);
	cout << "Vetor ordenado: \n";

	printVet(vet, n);

	auto resultado = std::chrono::high_resolution_clock::now() - inicio;
	long long microseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(resultado).count();

	cout << microseconds;

	return 0;
}

