#include <iostream>
#include "Aluno.h"
#include <fstream>
#include <locale>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
	setlocale(LC_ALL,"Portuguese");

	int M, op;
	float N;
	char nome[40];
	Aluno a1;
	
	vector <Indice> ind;
	//int buscaMat[1000];
	
	do
	{
		ifstream File("Arquivo.dat", ios::in| ios::binary);
	
		File.read((char *)(&a1),sizeof(Aluno)); 
		
		
		//int i=0;
		while(!File.eof()) // enquanto eof guarda no vetor de objeto. 
		{
			//escrevendo todos os dados no arquivo para o indice para poder ser ordenado.
			
			//passando informações para classe indice
			M= a1.getMatricula();
			N= a1.getNota();
			strcpy(nome, a1.getNome());		
			
			
			ind.push_back(*(new Indice(M,N,nome))); // alocação dinamica
			//buscaMat[i]= M;
			
			File.read((char *)(&a1),sizeof(Aluno));
			//i++;
		}
		
		File.close();
		
		sort(ind.begin(), ind.end()); // ordenando o vetor de objeto
		
		
		fstream FileInd("Indice.dat", ios::out);
		for(int i=0; i<ind.size(); i++) // colocando no arquivo de indice
		{
			
			FileInd.write((const char *)(&ind[i]),sizeof(ind[i]));
			
		}	
		FileInd.close();
		
		cout << "Deseja realizar qual operação?" << endl;
		cout << "1. Inserir" << endl;
		cout << "2. Alterar" << endl;
		cout << "3. Buscar" << endl;
		cout << "4. Excluir" << endl;
		cout << "5. Indice" << endl;
		cout << "6. Sair" << endl;
	
		cin >> op;
		
		if(op==1)
		{	
			ofstream File("Arquivo.dat", ios::app | ios::binary);
			
			if(!File)
			{
				cout << "Nao abriu" << endl;
			}
			
			do
			{
				cout << "Digite o numero da matricula (-1 pra sair)" << endl;
				cin >> M;
				
				if(M!=-1)
				{
					cout << "Digite a nota do aluno: " << endl;
					cin >> N;
				
					cout << "Digite o nome do aluno: " << endl;
					cin.ignore();
					cin.getline(nome,39);
				
					a1.setudo(M,N,nome);
			
					File.write((const char *)(&a1),sizeof(Aluno));
				}
				
			}
			while(M!=-1);
			
			File.close();
		}
			
		
		else if(op==2)
		{
			do 
			{
				cout << "Digite o numero da matricula que deseja alterar(sair -1)" << endl;
				cin >> M;
				
				if(M!=-1)
				{
					fstream File("Arquivo.dat", ios::in| ios::out | ios::binary); // tellg da iftream e seekp da oftream
					
					cout << "Digite a nota do aluno: " << endl;
					cin >> N;
					
					cout << "Digite o nome do aluno: " << endl;
					cin.ignore();
					cin.getline(nome,39);
					
					while(!File.eof())
					{
						int pos =File.tellg(); // pegando a posição atual do arquivo 
						
						File.read((char *)(&a1),sizeof(a1)); 
						if(M==a1.getMatricula())// se o numero da Mat for igual a que ta no arquivo.
						{
							a1.setudo(M,N,nome); // Novos dados a serem colocados
							
							File.seekp(pos);// colocando o ponteiro da função write na posição dos antigos dados
							
							File.write((const char *)(&a1),sizeof(a1)); // escrevendo os novos dados;
							break; // se ja escreveu então para
						}
					}
					
					File.close();
				}
			}while(M!=-1);
			
		}
		
		else if(op==3)
		{
			/*
			VetorThing v;
			int T= ind.size();
			sort(buscaMat, buscaMat+T);
			*/
			do
			{
				cout << "Deseja olhar a nota de qual aluno? " << endl;
				cin >> M;
				a1.setMatricula(M);
				
				if(M!=-1)
				{	
					fstream File("Indice.dat", ios::in | ios::binary);
					/*
					File.read((char *)(&a1),sizeof(a1));
					int pos=0; 
					pos= v.BuscaBin(buscaMat, T, M);
					
					cout << "pos: " << pos << endl;
					
					if(pos==-1)
					{
						cout << "Não existe matricula registrada com esse numero" << pos << endl;
					}
					
					else
					{
						pos= pos*46; // como nesse programa ta andando por 46 bytes multiplica a posiçõa da busca binaria pelo valor em bytes
						File.seekp(pos); // pega a posicao 
						File.read((char *)(&a1),sizeof(a1));
						
						cout << "Matricula: " << M << endl;
						cout << "Nota: " << a1.getNota()<< endl;
						cout << "Nome: " << a1.getNome() << endl << endl;
					}
					*/
					while(!File.eof())
					{	
						int pos =File.tellg(); //posicao autal em bytes
			
						File.read((char *)(&a1),sizeof(a1)); 
						if(M==a1.getMatricula())// se o numero da Mat for igual a que ta no arquivo.
						{
							File.seekg(pos); // pega a posicao 
							File.read((char *)(&a1),sizeof(a1)); //substitui os dados na classe
							break; // se entrou é pq achou
						}
					}
					
					cout << "Matricula: " << M << endl;
					cout << "Nota: " << a1.getNota()<< endl;
					cout << "Nome: " << a1.getNome() << endl << endl;
					
					File.close(); // fecha o arquivo para poder fazer outra busca depois
				}
				
			}while(a1.getMatricula()!=-1);
			
			// File.close();
		}
	
		else if(op==4)
		{
			fstream File("Arquivo.dat", ios::out| ios::in | ios::binary);
			
			cout << "Digite a Matricula para ser apagada: " << endl;
			cin >> M;
			
			while(!File.eof())
			{
				int pos =File.tellg(); // pegando a posição atual do arquivo
						
				File.read((char *)(&a1),sizeof(a1)); 
				if(M==a1.getMatricula())// se o numero da Mat for igual a que ta no arquivo.
				{
					a1.alunoDel(); // Novos dados a serem colocados
							
					File.seekp(pos);// colocando o ponteiro da função write na posição dos antigos dados
							
					File.write((const char *)(&a1),sizeof(a1)); // escrevendo os novos dados;
					break; // se ja escreveu então para
				}
			}
			
			cout << "Matricula " << M << " apagada." << endl; 
			
			File.close();
		}
		
		else if(op==5)
		{
			ifstream File("Indice.dat", ios::in| ios::binary);
			
			File.read((char *)(&a1),sizeof(Aluno));
			
			while(!File.eof())
			{
				if(a1.getMatricula()!=-2)
				{
					cout << "Matricula: " << a1.getMatricula() << endl;
					cout << "Nota: " << a1.getNota() << endl;
					cout << "Nome: " << a1.getNome() << endl << endl;
				}
				
				File.read((char *)(&a1),sizeof(Aluno));
			}
			
			File.close();
		}
		
		ind.clear(); // limpa os dados do vetor de objeto para que não guarde repetido
	
	}while(op!=6);
	
	return 0;
}
