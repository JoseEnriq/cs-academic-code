
// sequential search
#include <iostream>
#include <cstdlib>
#include <chrono>
#include <vector>
using namespace std;

int busca(int vet[], int N, int x)
{
	int i;
	for (i = 0; i < N; i++)
	{
		if (vet[i] == x)
		{
			return i;
		}
	}
	
	return -1;
}

int main(void)
{
	auto inicio = std::chrono::high_resolution_clock::now();
	int vet[1000];

	for (int i = 0; i < 1000; i++) {
		vet[i] = rand() % 100;
	}

	int x = 10;
	int N = sizeof(vet) / sizeof(vet[0]);

	int res = busca(vet, N, x);
	

	if(res == -1)
	{
		cout << "Elemento nao existe no vetor" << endl;
	}

	else
	{
		cout << "Elemento esta presente na posicao " << res << endl;
	}

	auto resultado = std::chrono::high_resolution_clock::now() - inicio;
	long long microseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(resultado).count();

	cout << microseconds;
	
	return 0;
}


