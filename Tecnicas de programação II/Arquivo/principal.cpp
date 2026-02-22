#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "Aluno.h"
#include "ListCDE.h"

using namespace std;
//Aluno: José Enrique Balieiro Quaresma

void menu();

int main()
{
	int op=0;
	ListCDE <Aluno> l;
	
	ifstream arq("alunos.csv");

	if (!arq.is_open()) throw std::runtime_error("Nao foi possivel abrir o arquivo");
	
	string linha;
	string x;
	string valores[4];
	Aluno a;
		
	getline(arq, linha);
	while (arq)
	{
		int i = 0;
		getline(arq, linha);
		istringstream ss(linha);

		while (getline(ss, x, ';'))
		{
			valores[i] = x;
			i++;

			if (i == 4) // como são 4 dados no momento que chegar no 4 é por que chegou no ultimo
			{
				int m;
				double n1, n2;

				m = stoi(valores[0]); // string para int
				n1 = stod(valores[2]); // string para double
				n2 = stod(valores[3]);

				a.setTudo(m, valores[1], n1, n2);
				l.pushBack(a);
				i = 0; // passa pra proxima linha e coloca o i pra 0 pra ler desde o começo da linha
			}
		}
	}

	arq.close();
	
	while (op != 5)
	{
		menu();
		int m;
		double n1, n2;
		string nome;

		try
		{
			cin >> op;

			if (op >= 1 && op <= 5)
			{
				if (op == 1)
				{
					cout << "Digite o numero da matricula: ";
					cin >> m;

					cout << "Digite o nome do aluno: ";
					cin >> nome;

					cout << "digite a nota 1: ";
					cin >> n1;

					cout << "Digite a nota 2: ";
					cin >> n2;

					a.setTudo(m, nome, n1, n2);
					l.pushBack(a);
				}

				else if (op == 2)
				{
					cout << "Digite o numero da matricula do aluno que deseja excluir" << endl;
					cin >> m;

					if (l.excluir(m) == true)
					{
						cout << "Matricula encontrada." << endl;
						cout << "Aluno excluido." << endl;
					}

					else
					{
						cout << "Matricula não encontrada" << endl;
					}
				}

				else if (op == 3)
				{
					cout << "Digite o numero da matricula do aluno que deseja consultar" << endl;
					cin >> m;

					l.consultar(m);
				}

				else if (op == 4)
				{
					l.listar();
				}

				else
				{
					l.excluirLista();
				}
			}

			else
			{
				throw(op);
			}
		}

		catch (int num)
		{
			cout << "O numero " << num << " nao e valido para navegar no menu" << endl;
			cout << "Digite um numero valido." << endl << endl;
		}
	}
		
	
	return 0;
}

void menu()
{
	cout << "Deseja realizar qual operacao?" << endl;
	cout << "1.Incluir um aluno" << endl;
	cout << "2.Excluir aluno" << endl;
	cout << "3.Consultar aluno" << endl;
	cout << "4.Listar alunos" << endl;
	cout << "5.Sair do programa" << endl << endl;
}

/*
template <typename T>
T conversao()
{

}
*/