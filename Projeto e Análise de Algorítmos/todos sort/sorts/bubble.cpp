
//Bubble sort
#include <iostream>
#include <cstdlib>
#include <chrono>
#include <vector>

using namespace std;

// Função bubble sort
void bubbleSort(int vet[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - i - 1; j++)
			if (vet[j] > vet[j + 1])
				swap(vet[j], vet[j + 1]);
}

// função que mostra o vetor
void printArray(int vet[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << vet[i] << " ";
	cout << endl;
}

int main()
{
	auto inicio = std::chrono::high_resolution_clock::now();
	int vet[10000];
	for (int i = 0; i < 10000; i++) {
		vet[i] = rand() % 100;
	}
	int N = sizeof(vet) / sizeof(vet[0]);
	bubbleSort(vet, N);
	cout << "vetor ordenado: \n";
	printArray(vet, N);
	auto resultado = std::chrono::high_resolution_clock::now() - inicio;
	long long microseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(resultado).count();

	cout << microseconds;
	return 0;
}

