#include <iostream>
#include <iomanip>
#include <cmath>

// Alunos : José Enrique Balieiro Quaresma
//			Matteo Costa Ferreira Mannarino

#define pi 3.14159265
#define v 1.570796

using namespace std;

unsigned long long int fat(int valor)
{
	unsigned long long f = 1;

	while (valor > 0)
	{
		f *= valor--;
	}
		
	return f;
}

int main()
{
	long double seno[11], erroR, erroA, n;
	int numero, s = -1;

	cout << " |  Seno \t| Erro Relativo |Erro Absoluto " << endl;

	for (int k = 0; k <= 10; k++)
	{
		cout << fixed << setprecision(6);

		numero = 2 * k + 1;
		s*=(-1);

		n = s * (pow(v, numero) / fat(numero));

		if (k == 0)
		{
			seno[k] = n;
		}

		else
		{
			seno[k] = n+seno[k-1];
		}

		erroR = abs((1 - n) / 1);
		erroA = abs(1 - n);
		cout << k << "| " << seno[k] << "" << "\t|" << erroR << "\t|" << erroA << endl;
	}

	cout << endl;
	cout << "Precisao: " << endl;

	float aux = 1;
	cout << fixed << setprecision(10);
	int i = 1;

	while (aux + 1 != 1)
	{
		aux = aux / 2;
		cout << " " << i << ":\t" << aux << endl;
		i++;
	}

	cout << endl << " " << aux * 2 << endl;

	return 0;
}