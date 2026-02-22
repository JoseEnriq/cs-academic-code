#pragma once
#include "Pessoa.h"
#include <iostream>
#include <string>
using namespace std;

class Fisica 
{
private:
    string cpf, nome;
    int celular;

public:
    Fisica()
    {
        cpf = nome ="";
        celular = 0;
    }

    Fisica(string cpf, string nome, int celular)
    {
        this->cpf = cpf;
        this->nome = nome;
        this->celular = celular;
    }

    string getCpf()
    {
        return cpf;
    }

	string getNome()
	{
		return nome;
	}

	int getCelular()
	{
		return celular;
	}

    void printFisica()
    {
        cout << "CPF: " << cpf << endl;
        cout << "Nome: " << nome << endl;
        cout << "Celular: " << celular << endl;
    }

	int validarCPF(char* cpf)
	{
		int i, j, digito1 = 0, digito2 = 0;
		if (strlen(cpf) != 11)
			return 0;
		
		else if ((strcmp(cpf, "00000000000") == 0) || (strcmp(cpf, "11111111111") == 0) || (strcmp(cpf, "22222222222") == 0) ||
			(strcmp(cpf, "33333333333") == 0) || (strcmp(cpf, "44444444444") == 0) || (strcmp(cpf, "55555555555") == 0) ||
			(strcmp(cpf, "66666666666") == 0) || (strcmp(cpf, "77777777777") == 0) || (strcmp(cpf, "88888888888") == 0) ||
			(strcmp(cpf, "99999999999") == 0))
			return 0; ///se o CPF tiver todos os numeros iguais ele e invalido.
		else
		{
			///digito 1---------------------------------------------------
			for (i = 0, j = 10; i < strlen(cpf) - 2; i++, j--) ///multiplica os numeros de 10 a 2 e soma os resultados dentro de digito1
				digito1 += (cpf[i] - 48) * j;
			digito1 %= 11;
			if (digito1 < 2)
				digito1 = 0;
			else
				digito1 = 11 - digito1;
			if ((cpf[9] - 48) != digito1)
				return 0; ///se o digito 1 nao for o mesmo que o da validação CPF e invalido
			else
				///digito 2--------------------------------------------------
			{
				for (i = 0, j = 11; i < strlen(cpf) - 1; i++, j--) ///multiplica os numeros de 11 a 2 e soma os resultados dentro de digito2
					digito2 += (cpf[i] - 48) * j;
				digito2 %= 11;
				if (digito2 < 2)
					digito2 = 0;
				else
					digito2 = 11 - digito2;
				if ((cpf[10] - 48) != digito2)
					return 0; ///se o digito 2 nao for o mesmo que o da validação CPF é inválido
			}
		}
		return 1;
	} // fonte: https://gist.github.com/eduardoedson/8f991b6d234a9ebdcbe3
    // funcao pra verificar cpf
};

