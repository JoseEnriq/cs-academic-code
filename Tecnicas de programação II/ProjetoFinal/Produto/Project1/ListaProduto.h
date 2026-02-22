#pragma once
#include <iostream>
#include "ProdutoClasse.h"
#include <string>
#include <sstream>
#include <fstream>
//#include <QString>

using namespace std;

template <class T>
class Node
{
public:

        T valor;
        Node<T>* next;
        Node<T>* prev;
        Node(T v)
        {
                this->valor = v;
                next = prev = NULL;
        }

};

template <class T>
class ListaProduto
{
private:
        Node<T>* head;
        Node<T>* tail;
        int tam;

public:
        ListaProduto()
        {
                head = tail = NULL;
                tam = 0;
        }

        ~ListaProduto()
        {
        }

        void fazerLista(ListaProduto <ProdutoClasse> &l)
        {
            // abrindo o arquivo
            ifstream arq("Produtos.csv");
            if (!arq.is_open()) throw std::runtime_error("Nao foi possivel abrir o arquivo");

            string linha, x;
            string valores[4];
            //[0]=id;[1]= descrição; [2]= preco; [3]= quantidade;

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

                    if (i == 4)
                    {

                        int codigo = stoi(valores[0]);

                        cout << valores[0] << endl;
                        cout << valores[1] << endl;
                        cout << valores[2] << endl;
                        cout << valores[3] << endl;

                        ProdutoClasse p(codigo,valores[1],valores[2],valores[3]);
                        l.pushBack(p);
                        i = 0;
                    }

                    
                }
            }
            cout << "sucesso" << endl;
            arq.close();
        }
        void pushFront(T v)
        {
            Node<T>* temp = new Node<T>(v);

            if (head == NULL)
            {
                head = tail = temp;
            }

            else
            {
                head->prev = temp;
                temp->next = head;
                head = temp;
            }

            tam++;
        }

        void pushBack(T v)
        {
            Node<T>* temp = new Node<T>(v);

            if (tail == NULL)
            {
                head = tail = temp;
            }

            else
            {
                tail->next = temp;
                temp->prev = tail;
                tail = temp;
            }

            tam++;
        }

        T popFront()
        {
            if (!isEmpty())
            {
                Node<T>* temp = head;
                if (head == tail)
                {
                    tail = NULL;
                }

                T delValor = temp->valor;
                head = head->next;

                delete temp;

                tam--;

                return delValor;

            }

            else
            {
                cout << "Fila esta vazia" << endl;
            }
        }

        T popBack()
        {
            if (!isEmpty())
            {
                Node<T>* temp = tail;
                if (head == tail)
                {
                    head = NULL;
                }

                T delValor = temp->valor;
                tail->next = NULL;
                tail = tail->prev;

                delete temp;

                tam--;

                return delValor;

            }

            else
            {
                cout << "Fila esta vazia" << endl;
            }
        }

        bool isEmpty()
        {
            if (tam <= 0)
            {
                return true;
            }

            return false;
        }
        /*
        QString listarProdutos()
        {
            QString msg= "";

            Node<T>* temp = head;

            while (temp != NULL)
            {
                QString id= "Id Produto: " + QString::number(temp->valor.getId());
                QString des= "Descrição: " + QString::fromStdString(temp->valor.getDescricao());
                QString pre= "Preço: " + QString::number(temp->valor.getPreco());
                QString quan= "Quantidade: " + QString::number(temp->valor.getQuantidade());


                msg+="\x0A"+id+"\x0A"+des+"\x0A"+pre+"\x0A"+quan+"\x0A";


                temp = temp->next;
            }
            return msg;
        }
        */
        bool removerProduto(int v)

        {
            Node<T>* temp = head;
            Node<T>* prev = NULL;

            if (temp != NULL && temp->valor.getId() == v)
            {
                head = temp->next;
                delete temp;
                return true;
            }

            else
            {
                while (temp != NULL && temp->valor.getId() != v)
                {
                    prev = temp;
                    temp = temp->next;
                }

                if (temp == NULL)
                    return false;

                prev->next = temp->next;

                delete temp;
            }
        }

        /*
        QString consultarProduto(int v)
        {
            if (!isEmpty())
            {
                Node<T>* temp = head;
                while (temp)
                {

                    if (temp->valor.getCodigo() == v)
                    {
                        QString msg= "Codigo encontrado\n";

                        QString id= "Id: " + QString::number(temp->valor.getId());
                        QString des= "Descrição: " + QString::fromStdString(temp->valor.getDescricao());
                        QString pre= "Preço: " + QString::number(temp->valor.getPreco());
                        QString quan= "Quantidade: " + QString::number(temp->valor.getQuantidade());


                        return msg+"\x0A"+id+"\x0A"+des+"\x0A"+pre+"\x0A"+quan+"\x0A";




                        cout << endl;


                    }
                    temp = temp->next;
                }
            }
        }
        */
            bool verificaProduto(int v)
            {
                Node<T>* temp = head;
                while (temp)
                {
                    if (temp->valor.getId() == v)
                    {
                        return true; // codigo ja existe
                    }

                    temp = temp->next;
                }

                return false; // codigo nao existe
            }

            void atualizarLista()
            {
                ofstream arq("C:/Users/enriq/Documents/QtProjetos/Cliente/clienteTeste/Produtos.csv");
                if (!arq.is_open()) throw std::runtime_error("Nao foi possivel abrir o arquivo");

                arq << "id;descricao;preco;quantidade" << endl;
                string id, des, pre, quan;

                Node<T>* current = head;
                Node<T>* next = NULL;

                while (current != NULL)
                {
                    id = to_string(current->valor.getId());
                    des = current->valor.getDescricao();
                    pre = to_string(current->valor.getPreco());
                    quan = to_string(current->valor.getQuantidade());

                    {
                        cout << "entrou prduto" << endl;
                        arq << id + ';' + des + ';' + pre + ';' + quan << endl;
                    }

                    next = current->next;
                    delete current;
                    current = next;
                }

                head = NULL;

                arq.close();
            }
};
