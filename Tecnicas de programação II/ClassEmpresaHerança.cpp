#include <iostream>

using namespace std;

class Empresa
{
	private:
		string nome, endereco, cidade, estado;
		string cep, tel;
	
	public:
		Empresa();
		Empresa(string n, string end, string cid, string es, string c, string t);
		
		void print();
		void setudo(string n, string end, string cid, string es, string c, string t);
		string getnome();
		string getendereco();
		string getcidade();
		string getestado();
		string getcep();
		string getel();
		 
};

Empresa::Empresa()
{
	nome=endereco=cidade=estado=cep=tel= "0";
}

Empresa::Empresa(string n, string end, string cid, string es, string c, string t)
{
	nome=n;
	endereco= end;
	cidade=cid;
	estado=es;
	cep= c;
	tel= t;
}

void Empresa::print()
{
	cout << "Nome: " << nome << endl;
	cout << "Endereco:" << endereco << endl;
	cout << "Cidade: " << cidade << endl;
	cout << "Estado: " << estado << endl;
	cout << "CEP: " << cep << endl;
	cout << "Telefone: " << tel << endl;
}

void Empresa::setudo(string n, string end, string cid, string es, string c, string t)
{
	nome=n;
	endereco= end;
	cidade=cid;
	estado=es;
	cep= c;
	tel= t;
}

string Empresa::getnome()
{
	return nome;
}

string Empresa::getendereco()
{
	return endereco;
}

string Empresa::getcidade()
{
	return cidade;
}

string Empresa::getestado()
{
	return estado;
}

string Empresa::getel()
{
	return tel;
}

string Empresa::getcep()
{
	return cep;
}

class Restaurante : public Empresa
{
	private:
		string comida;
		int preco;
		
	public:
		Restaurante(string n, string end, string cid, string es, string c, string t);
		
};

Restaurante::Restaurante(string n, string end, string cid, string es, string c, string t)
{
	Empresa:Empresa(n,end,cid,es,c,t);
}


int main()
{
	string v1, v2, v3, v4;
	string cep, tel;
	Empresa e;
	
	v1="mc";
	v2="rua 2";
	v3="goiania";
	v4="goias";
	cep="231231";
	tel="231321";
	
	Restaurante r(v1,v2,v3,v4,cep,tel);
	
	r.print();
	
	return 0;
}
