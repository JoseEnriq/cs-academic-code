#include "ListCDE.h"
#include "Stack.h"
#include <iostream>
#include <algorithm>

using namespace std;

void distribuir(Stack<string>& s, ListCDE<string>& l);
int valorCartas(string cd);
void jogar(Stack<string>& s, ListCDE<string>& l, int &pontos);

int main()
{
	int pontos[10];

	cout << "Digite a quantidade de partidas: ";
	int qtd;
	cin >> qtd;

	cout << "Digite a quantidade de jogadores: ";
	int qtdJ;
	cin >> qtdJ;

	cout << "Digite as cartas ja embaralhadas: ";
	string card;
	Stack <string> monte;
	for (int i = 0; i < 104; i++)
	{
		cin >> card;
		monte.push(card);
	}

	// proximo passo: distribuir as cartas já embaralhada

	ListCDE <string> jgdr[10];

	Stack<string> lixo;

	lixo.push(jgdr[0].front()); // j1 joga primeiro


	if (qtdJ == 2)
	{
		for (int i = 0; i < 2; i++)
		{
			distribuir(monte, jgdr[i]);
		}

		int j = 0;
		while (j != jgdr[0].tamanho())
		{
			jogar(monte, jgdr[0], &pontos[0], 0);

			j++;
		}
		j = 0;

		while (j != jgdr[1].tamanho())
		{
			jogar(monte, jgdr[0], &pontos[0], 0);

			j++;
		}
		j = 0;

	}

	else if (qtdJ == 3)
	{
		for (int i = 0; i < 3; i++)
		{
			distribuir(monte, jgdr[i]);
		}

		int j = 0;
		while (j != jgdr[0].tamanho())
		{
			jogar(monte, jgdr[0], &pontos[0], 0);

			j++;
		}
		j = 0;

		while (j != jgdr[1].tamanho())
		{
			jogar(monte, jgdr[1], &pontos[1], 1);

			j++;
		}
		j = 0;

		while (j != jgdr[2].tamanho())
		{
			jogar(monte, jgdr[2], &pontos[2], 2);

			j++;
		}
		
	}

	else if (qtdJ == 4)
	{
		for (int i = 0; i < 4; i++)
		{
			distribuir(monte, jgdr[i]);
		}

		int j = 0;
		while (j != jgdr[0].tamanho())
		{
			jogar(monte, jgdr[0], &pontos[0], 0);

			j++;
		}
		j = 0;

		while (j != jgdr[1].tamanho())
		{
			jogar(monte, jgdr[1], &pontos[1], 1);

			j++;
		}
		j = 0;

		while (j != jgdr[2].tamanho())
		{
			jogar(monte, jgdr[2], &pontos[2], 2);

			j++;
		}

		j = 0;

		while (j != jgdr[3].tamanho())
		{
			jogar(monte, jgdr[3], &pontos[3], 3);

			j++;
		}

	
	}

	else if (qtdJ == 5)
	{
		for (int i = 0; i <5 ; i++)
		{
			distribuir(monte, jgdr[i]);
		}

		int j = 0;
		while (j != jgdr[0].tamanho())
		{
			jogar(monte, jgdr[0], &pontos[0], 0);

			j++;
		}
		j = 0;

		while (j != jgdr[1].tamanho())
		{
			jogar(monte, jgdr[1], &pontos[1], 1);

			j++;
		}
		j = 0;

		while (j != jgdr[2].tamanho())
		{
			jogar(monte, jgdr[2], &pontos[2], 2);

			j++;
		}

		j = 0;

		while (j != jgdr[3].tamanho())
		{
			jogar(monte, jgdr[3], &pontos[3], 3);

			j++;
		}

		j = 0;

		while (j != jgdr[4].tamanho())
		{
			jogar(monte, jgdr[4], &pontos[4], 4);

			j++;
		}
	}

	else if (qtdJ == 6)
	{
		for (int i = 0; i < 6; i++)
		{
			distribuir(monte, jgdr[i]);
		}

		int j = 0;
		while (j != jgdr[0].tamanho())
		{
			jogar(monte, jgdr[0], &pontos[0], 0);

			j++;
		}
		j = 0;

		while (j != jgdr[1].tamanho())
		{
			jogar(monte, jgdr[1], &pontos[1], 1);

			j++;
		}
		j = 0;

		while (j != jgdr[2].tamanho())
		{
			jogar(monte, jgdr[2], &pontos[2], 2);

			j++;
		}

		j = 0;

		while (j != jgdr[3].tamanho())
		{
			jogar(monte, jgdr[3], &pontos[3], 3);

			j++;
		}

		j = 0;

		while (j != jgdr[4].tamanho())
		{
			jogar(monte, jgdr[4], &pontos[4], 4);

			j++;
		}

		j = 0;

		while (j != jgdr[5].tamanho())
		{
			jogar(monte, jgdr[5], &pontos[5], 5);

			j++;
		}
	}

	else if (qtdJ == 7)
	{
		for (int i = 0; i < 7; i++)
		{
			distribuir(monte, jgdr[i]);
		}

		int j = 0;
		while (j != jgdr[0].tamanho())
		{
			jogar(monte, jgdr[0], &pontos[0], 0);

			j++;
		}
		j = 0;

		while (j != jgdr[1].tamanho())
		{
			jogar(monte, jgdr[1], &pontos[1], 1);

			j++;
		}
		j = 0;

		while (j != jgdr[2].tamanho())
		{
			jogar(monte, jgdr[2], &pontos[2], 2);

			j++;
		}

		j = 0;

		while (j != jgdr[3].tamanho())
		{
			jogar(monte, jgdr[3], &pontos[3], 3);

			j++;
		}

		j = 0;

		while (j != jgdr[4].tamanho())
		{
			jogar(monte, jgdr[4], &pontos[4], 4);

			j++;
		}

		j = 0;

		while (j != jgdr[5].tamanho())
		{
			jogar(monte, jgdr[5], &pontos[5], 5);

			j++;
		}

		j = 0;

		while (j != jgdr[6].tamanho())
		{
			jogar(monte, jgdr[6], &pontos[6], 6);

			j++;
		}
	}

	else if (qtdJ == 8)
	{
		for (int i = 0; i < 8; i++)
		{
			distribuir(monte, jgdr[i]);
		}

		int j = 0;
		while (j != jgdr[0].tamanho())
		{
			jogar(monte, jgdr[0], &pontos[0], 0);

			j++;
		}
		j = 0;

		while (j != jgdr[1].tamanho())
		{
			jogar(monte, jgdr[1], &pontos[1], 1);

			j++;
		}
		j = 0;

		while (j != jgdr[2].tamanho())
		{
			jogar(monte, jgdr[2], &pontos[2], 2);

			j++;
		}

		j = 0;

		while (j != jgdr[3].tamanho())
		{
			jogar(monte, jgdr[3], &pontos[3], 3);

			j++;
		}

		j = 0;

		while (j != jgdr[4].tamanho())
		{
			jogar(monte, jgdr[4], &pontos[4], 4);

			j++;
		}

		j = 0;

		while (j != jgdr[5].tamanho())
		{
			jogar(monte, jgdr[5], &pontos[5], 5);

			j++;
		}

		j = 0;

		while (j != jgdr[6].tamanho())
		{
			jogar(monte, jgdr[6], &pontos[6], 6);

			j++;
		}

		j = 0;

		while (j != jgdr[7].tamanho())
		{
			jogar(monte, jgdr[7], &pontos[7], 7);

			j++;
		}
	}

	else if (qtdJ == 9)
	{
		for (int i = 0; i < 9; i++)
		{
			distribuir(monte, jgdr[i]);
		}

		int j = 0;
		while (j != jgdr[0].tamanho())
		{
			jogar(monte, jgdr[0], &pontos[0], 0);

			j++;
		}
		j = 0;

		while (j != jgdr[1].tamanho())
		{
			jogar(monte, jgdr[1], &pontos[1], 1);

			j++;
		}
		j = 0;

		while (j != jgdr[2].tamanho())
		{
			jogar(monte, jgdr[2], &pontos[2], 2);

			j++;
		}

		j = 0;

		while (j != jgdr[3].tamanho())
		{
			jogar(monte, jgdr[3], &pontos[3], 3);

			j++;
		}

		j = 0;

		while (j != jgdr[4].tamanho())
		{
			jogar(monte, jgdr[4], &pontos[4], 4);

			j++;
		}

		j = 0;

		while (j != jgdr[5].tamanho())
		{
			jogar(monte, jgdr[5], &pontos[5], 5);

			j++;
		}

		j = 0;

		while (j != jgdr[6].tamanho())
		{
			jogar(monte, jgdr[6], &pontos[6], 6);

			j++;
		}

		j = 0;

		while (j != jgdr[7].tamanho())
		{
			jogar(monte, jgdr[7], &pontos[7], 7);

			j++;
		}

		j = 0;

		while (j != jgdr[8].tamanho())
		{
			jogar(monte, jgdr[8], &pontos[8], 8);

			j++;
		}
	}

	else if (qtdJ == 9)
	{
		for (int i = 0; i < 9; i++)
		{
			distribuir(monte, jgdr[i]);
		}

		int j = 0;
		while (j != jgdr[0].tamanho())
		{
			jogar(monte, jgdr[0], &pontos[0], 0);

			j++;
		}
		j = 0;

		while (j != jgdr[1].tamanho())
		{
			jogar(monte, jgdr[1], &pontos[1], 1);

			j++;
		}
		j = 0;

		while (j != jgdr[2].tamanho())
		{
			jogar(monte, jgdr[2], &pontos[2], 2);

			j++;
		}

		j = 0;

		while (j != jgdr[3].tamanho())
		{
			jogar(monte, jgdr[3], &pontos[3], 3);

			j++;
		}

		j = 0;

		while (j != jgdr[4].tamanho())
		{
			jogar(monte, jgdr[4], &pontos[4], 4);

			j++;
		}

		j = 0;

		while (j != jgdr[5].tamanho())
		{
			jogar(monte, jgdr[5], &pontos[5], 5);

			j++;
		}

		j = 0;

		while (j != jgdr[6].tamanho())
		{
			jogar(monte, jgdr[6], &pontos[6], 6);

			j++;
		}

		j = 0;

		while (j != jgdr[7].tamanho())
		{
			jogar(monte, jgdr[7], &pontos[7], 7);

			j++;
		}

		j = 0;

		while (j != jgdr[8].tamanho())
		{
			jogar(monte, jgdr[8], &pontos[8], 8);

			j++;
		}

		j = 0;

		while (j != jgdr[9].tamanho())
		{
			jogar(monte, jgdr[9], &pontos[9], 9);

			j++;
		}
	}

	else
	{
		for (int i = 0; i < 10; i++)
		{
			distribuir(monte, jgdr[i]);
		}

		int j = 0;
		while (j != jgdr[0].tamanho())
		{
			jogar(monte, jgdr[0], &pontos[0], 0);

			j++;
		}
		j = 0;

		while (j != jgdr[1].tamanho())
		{
			jogar(monte, jgdr[1], &pontos[1], 1);

			j++;
		}
		j = 0;

		while (j != jgdr[2].tamanho())
		{
			jogar(monte, jgdr[2], &pontos[2], 2);

			j++;
		}

		j = 0;

		while (j != jgdr[3].tamanho())
		{
			jogar(monte, jgdr[3], &pontos[3], 3);

			j++;
		}

		j = 0;

		while (j != jgdr[4].tamanho())
		{
			jogar(monte, jgdr[4], &pontos[4], 4);

			j++;
		}

		j = 0;

		while (j != jgdr[5].tamanho())
		{
			jogar(monte, jgdr[5], &pontos[5], 5);

			j++;
		}

		j = 0;

		while (j != jgdr[6].tamanho())
		{
			jogar(monte, jgdr[6], &pontos[6], 6);

			j++;
		}

		j = 0;

		while (j != jgdr[7].tamanho())
		{
			jogar(monte, jgdr[7], &pontos[7], 7);

			j++;
		}

		j = 0;

		while (j != jgdr[8].tamanho())
		{
			jogar(monte, jgdr[8], &pontos[8], 8);

			j++;
		}

		j = 0;

		while (j != jgdr[9].tamanho())
		{
			jogar(monte, jgdr[9], &pontos[9], 9);

			j++;
		}

		while (j != jgdr[10].tamanho())
		{
			jogar(monte, jgdr[10], &pontos[10], 10);

			j++;
		}
	}

	int maior=0;
	int numJogador;

	for (int i = 0; i < 10; i++)
	{
		if (pontos[i] > maior)
		{
			maior = pontos[i];
			numJogador = i;
		}
	}
	
	cout << "Vencedor da partida : " << qtd << "Jogador " << numJogador << endl;


	return 0;
}

void distribuir(Stack<string> &s, ListCDE<string> &l)
{
	string v;

	for (int i = 0; i < 5; i++)
	{
		l.pushBack(s.Top());
		s.pop(v);
	}

}

int valorCartas(string cd)
{
	int p1=0, p2=0;

	if (cd[0] == 'A') p1 = 1;
	if (cd[1] == '2') p2 = 2;
	if (cd[1] == '3') p2 = 3;
	if (cd[1] == '4') p2 = 4;
	if (cd[1] == '5') p2 = 5;
	if (cd[1] == '6') p2 = 6;
	if (cd[1] == '7') p2 = 7;
	if (cd[1] == '8') p2 = 8;
	if (cd[1] == '9') p2 = 9;
	if (cd[1] == '10') p2 = 10;
	if (cd[0] == 'J') p1 = 11;
	if (cd[0] == 'Q') p1 = 12;
	if (cd[0] == 'K') p1 = 13;

	return p1 + p2;
}

void jogar(Stack<string>& s, ListCDE<string>& l, int* pontos, int i)
{
	string v;

	if (l.search(s.Top()) == true) // procurar se o jogador 1 tem a carta do topo do lixo
	{
		pontos[i] = valorCartas(s.Top());
		s.push(l.popBack());
	}

	else // não possui a carta e compra uma do monte
	{
		l.pushFront(s.Top());
		s.pop(v);
	}
}