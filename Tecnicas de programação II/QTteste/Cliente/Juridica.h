#pragma once
#include "Pessoa.h"
#include <string>

using namespace std;

class Juridica
{
private:
    string cnpj, razaoSocial, nomeContato;

public:
    Juridica()
    {
        cnpj = razaoSocial = nomeContato = "";
    }

    Juridica(string cnpj, string razaoSocial, string nomeContato)
    {
        this->cnpj = cnpj;
        this->razaoSocial = razaoSocial;
        this->nomeContato = nomeContato;
    }

    string getCnpj()
    {
        return cnpj;
    }

	string getRazaoSocial()
	{
		return razaoSocial;
    }

	string getNomeContato()
	{
		return nomeContato;
	}

    void printJuridica()
    {
        cout << "CNPJ: " << cnpj << endl;
        cout << "Razao Social: " << razaoSocial << endl;
        cout << "Nome Contado: " << nomeContato << endl;
    }

	bool validarCNPJ(char* CNPJ)
	{
		if (CNPJ == "00000000000000" || CNPJ == "11111111111111" || CNPJ == "22222222222222" || CNPJ == "33333333333333" || CNPJ == "44444444444444" || CNPJ == "55555555555555" || CNPJ == "66666666666666" || CNPJ == "77777777777777" || CNPJ == "88888888888888" || CNPJ == "99999999999999")
		{
			return false;
		}

		char dig13, dig14;
		int sm, i, r, num=0, peso;

		try
		{
			sm = 0;
			peso = 2;
			for (i = 11; i >= 0; i--)
			{
				
				num = (CNPJ[i] - 48);
				sm = sm + (num * peso);
				peso = peso + 1;
				if (peso == 10)
				{
					peso = 2;
				}
			}

			r = sm % 11;
			if ((r == 0) || (r == 1))
			{
				dig13 = '0';
			}
			else
			{
				dig13 = ((11 - r) + 48);
			}

			sm = 0;
			peso = 2;
			for (i = 12; i >= 0; i--)
			{
				num = (CNPJ[i] - 48);
				sm = sm + (num * peso);
				peso = peso + 1;
				if (peso == 10)
				{
					peso = 2;
				}
			}

			r = sm % 11;
			if ((r == 0) || (r == 1))
			{
				dig14 = '0';
			}
			else
			{
				dig14 = /*static_cast<wchar_t>*/((11 - r) + 48);
			}

			if ((dig13 == CNPJ[12]) && (dig14 == CNPJ[13]))
			{
				return (true);
			}
			else
			{
				return (false);
			}
		}
		catch (const std::runtime_error& erro)
		{
			return (false);
		}
	}
	// fonte: https://gist.github.com/jansenfelipe/5283063

    // funcao pra verificar cnpj
};
