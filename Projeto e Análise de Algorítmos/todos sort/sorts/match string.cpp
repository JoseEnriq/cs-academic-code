

// Algoritmo ingenuo
// Algoritmo de busca
#include <iostream>
#include <cstdlib>
#include <chrono>
#include <vector>

using namespace std;

void busca(char* pdr, char* txt)
{
	int M = strlen(pdr);
	int N = strlen(txt);
	
	 
	for (int i = 0; i <= N - M; i++) 
	{
		int j;
		
		// para o atual i, irá checar se os padrões são os mesmos
		for (j = 0; j < M; j++)
		{
			if (txt[i + j] != pdr[j])
			{
				break;
			}
		}
		
		if (j== M)
		{
			cout << "Padrão achado no indice " << i << endl;
		}
		
	}
}

int main()
{
	char txt[] = "AABAACAADAABAAABAA";
	char pdr[] = "AABA";

	// Chamada da função
	busca(pdr, txt);
	return 0;
}

