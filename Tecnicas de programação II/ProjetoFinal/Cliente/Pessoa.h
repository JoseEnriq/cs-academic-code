#pragma once
#include <iostream>
#include "Fisica.h"
#include "Juridica.h"

using namespace std;

class Pessoa : public Fisica, public Juridica
{
protected:
	int codigo;
	string logradouro, setor, cidade, estado;
	string telefone;
	string email;

public:
	Pessoa()
	{
		codigo = 0;
		logradouro = "";
		setor = "";
		cidade = "";
		estado = "";
		telefone = "";
		email = "";
	}
	
	/*
	Pessoa(int cd, string lgdr,  string st, string cid, string est, string tel, string eml)
	{
		codigo = cd;
		logradouro = lgdr;
		setor = st;
		cidade = cid;
		estado = est;
		telefone = tel;
		email = eml;
	}*/

	Pessoa(int cd, string lgdr, string st, string cid, string est, string tel, string eml, string cpf, string nome, int celular) :
		Fisica(cpf, nome, celular)
	{
		codigo = cd;
		logradouro = lgdr;
		setor = st;
		cidade = cid;
		estado = est;
		telefone = tel;
		email = eml;
	}

	Pessoa(int cd, string lgdr, string st, string cid, string est, string tel, string eml, string cnpj, string razaoSocial, string nomeContato) :
		Juridica(cnpj, razaoSocial, nomeContato)
	{
		codigo = cd;
		logradouro = lgdr;
		setor = st;
		cidade = cid;
		estado = est;
		telefone = tel;
		email = eml;
	}

	int getCodigo()
	{
		return codigo;
	}

	string getLogradouro()
	{
		return logradouro;
	}

	string getSetor()
	{
		return setor;
	}

	string getCidade()
	{
		return cidade;
	}

	string getEstado()
	{
		return estado;
	}

	string getTelefone()
	{
		return telefone;
	}

	string getEmail()
	{
		return email;
	}

};