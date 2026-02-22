#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "ListCDE.h"
#include "Pessoa.h"

using namespace std;

void menu();
void dados(string* valores);

int main()
{
	ListCDE <Pessoa> l;

	// abrindo o arquivo
	
	fstream arq("Clientes.csv");
	if (!arq.is_open())
	{
		ofstream arq("Clientes.csv");
	}
		

	string linha, x;
	string valores[13];
	//valores[0]= codigo; valores[1]= logradouro, valores[2]= setor, valores[3]= cidade; valores[4]= estado;
	//valores[5]= telefone; valores[6]= email; valores[7]= cpf; valores[8]=nome; valores[9]= celular; valores[10]= cnpj;
	//valores[11]= razaoSocial; valores[12]= nomeContato;

	// conversao das ; para conseguir colocar na lista
	getline(arq, linha);
	while (arq)
	{
		int i = 0;
		getline(arq, linha);
		istringstream ss(linha); // #include <sstream>

		while (getline(ss, x, ';'))
		{
			valores[i] = x;
			i++;
			
			if (i == 13) // como sao 13 dados em uma linha no momento que chegar no 13 e por que chegou no ultimo
			{
				int codigo = stoi(valores[0]); // string para int
				 
				if (valores[10] == "-1") // se a pessoa for fisica puxa o construtor dela
				{
					int cel = stoi(valores[9]);

					Pessoa fis(codigo, valores[1], valores[2], valores[3], valores[4], valores[5], valores[6], valores[7], valores[8], cel);
					l.pushBack(fis);
				}

				else // senao, e porque ela e juridica
				{
					Pessoa jrd(codigo, valores[1], valores[2], valores[3], valores[4], valores[5], valores[6], valores[10], valores[11], valores[12]);
					l.pushBack(jrd);
				}
				
				i = 0; // passa pra proxima linha e coloca o i pra 0 pra ler desde o comeco da linha
			}
		}
	}
	

	arq.close();


	int op=0;
	
	while (op!=5)
	{
		menu();
		cin >> op;

		if (op == 1)
		{
			cout << "Fisica(1) ou Juridica(2)?" << endl;
			cin >> op;

			cout << "Digite um codigo" << endl;
			int codigo;
			cin >> codigo;

			try
			{
				if (l.verificaCodigo(codigo) == false) // chama metodo para verificar se existe o codigo
				{
					cout << "Codigo valido para cadastro." << endl;
				}

				else {
					throw(&codigo);
				}
			}

			catch (int* codigo)
			{
				while (l.verificaCodigo(*codigo) != false)
				{
					cout << "O codigo " << *codigo << " ja existe, digite outro" << endl;
					cin >> *codigo;
				}
				cout << "Codigo valido para cadastro." << endl;
			} // fim tratamento do codigo


			if (op == 1) // pessoa fisica
			{
				char cpf[13];
				cout << "Digite o cpf:" << endl;
				cin >> cpf;
				Pessoa f;

				try
				{
					if (f.validarCPF(cpf) == 1)
					{

						if (l.verificaCpfExiste(cpf) == true)
						{
							throw(cpf); // se ele ja existir vai pro loop
						}
					}

					else
					{
						throw(cpf);
					}
				}

				catch (char* cpf)
				{
					while (f.validarCPF(cpf) != 1)
					{
						cout << "O cpf " << cpf << " nao e valido ou ja esta registrado, digite outro" << endl;
						cin >> cpf;
					}

					// se o cpf e valido e necessario ver se ele existe

					if (l.verificaCpfExiste(cpf) == true)
					{
						throw(cpf); // se existir volta pro loop 
					} // dando erro aqui por algum motivo
				}

				valores[7] = cpf;
				cout << "Cpf valido" << endl << endl;

				cin.ignore();
				// se chegou ate aqui e porque e valido
				cout << "Digite o nome:" << endl;
				getline(cin, valores[8]);

				cout << "Digite o numero de celular:" << endl;
				getline(cin, valores[9]);

				dados(valores); // passando o vetor como parametro

				int cel = stoi(valores[9]);
				Pessoa fis(codigo, valores[1], valores[2], valores[3], valores[4], valores[5], valores[6], valores[7], valores[8], cel); // colocando na lista
				l.pushBack(fis);
			}

			else // pessoa juridica
			{
				char cnpj[13];
				cout << "Digite o cnpj" << endl;
				cin >> cnpj;
				Pessoa j;

				
				try
				{
					if (j.validarCNPJ(cnpj) == true)
					{

						if (l.verificaCnpjExiste(cnpj) == true)
						{
							throw(cnpj); // se ele ja existir vai pro loop
						}
					}

					else
					{
						throw(cnpj);
					}
				}

				catch (char* cnpj)
				{
					while (j.validarCNPJ(cnpj) != true)
					{
						cout << "O cnpj " << cnpj << " nao e valido ou ja esta registrado, digite outro" << endl;
						cin >> cnpj;
					}

					// se o cnpj e valido e necessario ver se ele existe

					if (l.verificaCnpjExiste(cnpj) == true)
					{
						throw(cnpj); // se existir volta pro loop
					}
				}

				valores[10] = cnpj;
				cout << "Cnpj valido" << endl << endl;

				cin.ignore();

				cout << "Digite a razao social: " << endl;
				getline(cin, valores[11]);

				cout << "Digite o nome do contato: " << endl;
				getline(cin, valores[12]);

				dados(valores);

				Pessoa jrd(codigo, valores[1], valores[2], valores[3], valores[4], valores[5], valores[6], valores[10], valores[11], valores[12]);
				l.pushBack(jrd);
			}

			cout << "Cadastro realizado com sucesso." << endl;
		}

		else if (op == 2) // consultar
		{
			int codigo;
			cout << "Digite o codigo do cliente que deseja consultar:" << endl;
			cin >> codigo;

			try
			{
				if (l.verificaCodigo(codigo) == true)
				{
					cout << "Codigo valido" << endl;
				}

				else {
					throw(&codigo);
				}
			}

			catch (int* codigo)
			{
				while (l.verificaCodigo(*codigo) != true)
				{
					cout << "O codigo " << *codigo << " nao existe, digite outro:" << endl;
					cin >> *codigo;
				}

				cout << "Codigo valido" << endl;
			}

			l.consultarCliente(codigo);
		}

		else if (op == 3) //remover
		{
			int codigo;

			cout << "Didite o codigo do cliente que deseja remover: " << endl;
			cin >> codigo;
			try
			{
				if (l.verificaCodigo(codigo) == true)
				{
					cout << "Codigo valido" << endl;
				}

				else {
					throw(&codigo);
				}
			}

			catch (int* codigo)
			{
				while (l.verificaCodigo(*codigo) != true)
				{
					cout << "O codigo " << *codigo << " nao existe, digite outro:" << endl;
					cin >> *codigo;
				}
				cout << "Codigo valido" << endl;
			}

			cout << "Tem certeza que deseja remover esse cliente?(1)-sim (2)-nao" << endl;
			cin >> op;

			if (op == 1)
			{
				l.removerCliente(codigo);
				cout << "Cliente " << codigo << " removido" << endl;
			}

			else
			{
				cout << "Operacao cancelada." << endl;
			}
		}

		else if(op == 4)
		{
			l.listarClientes();
		}

		cout << endl;
	}
	
	l.excluirLista();

	system("pause");
	return 0;
}

void menu()
{
	setlocale(LC_ALL, "Portuguese");

	cout << "Deseja realizar que operacao?" << endl;
	cout << "1. Cadastrar cliente." << endl;
	cout << "2. Consultar cliente." << endl; 
	cout << "3. Remover cliente." << endl;
	cout << "4. Listar clientes." << endl;
	cout << "5. sair" << endl;
}

void dados(string *valores) // passando por ponteiro o que esta dentro do vetor ira mudar
{
	cout << "Digite o logradouro: " << endl;
	getline(cin, valores[1]);

	cout << "Digite o setor:" << endl;
	getline(cin, valores[2]);
	
	cout << "Digite a cidade: " << endl;
	getline(cin, valores[3]);

	cout << "Digite o estado: " << endl;
	getline(cin, valores[4]);

	cout << "Digite o telefone: " << endl;
	cin >> valores[5];

	cout << "Digite o email: " << endl;
	cin >> valores[6];
}
