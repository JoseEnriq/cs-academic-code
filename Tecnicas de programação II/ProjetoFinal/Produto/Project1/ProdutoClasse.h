#pragma once
#include <iostream>
//#include <QString>

using namespace std;

class ProdutoClasse
{
protected:
        int id;
        string quantidade;
        string descricao;
        string preco;
public:
        ProdutoClasse()
        {
            id = 0;
            descricao = "";
            preco = "";
            quantidade = "";

        }

       ProdutoClasse(int id, string des, string pre, string quan)
        {
            this->id = id;
            descricao = des;
            preco = pre;
            quantidade = quan;

        }


        void setId(int id)
        {
            this->id = id;
        }

        int getId()
        {
            return id;
        }

        string getDescricao()
        {
            return descricao;
        }

        string getPreco()
        {
            return preco;
        }

        string getQuantidade()
        {
            return quantidade;
        }

};
