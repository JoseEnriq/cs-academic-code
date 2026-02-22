#pragma once
#include <iostream>

using namespace std;

template <class T>
class NodeS
{
public:
    T valor;		
    NodeS<T>* next; 
};

template <class T>
class Stack
{
private:
    NodeS<T> * top;

public:
    Stack()
    {
        top = NULL;
    }

    ~Stack()
    {
        NodeS<T>* P;
        NodeS<T>* nextNode;

        P = top;

        while (P != NULL)
        {
            nextNode = P->next;
            delete P;
            P = nextNode;
        }
    }

    void push(T v)
    {
        NodeS<T>* newNode;

        newNode = new NodeS<T>;
        newNode->valor = v;

        if (isEmpty())
        {
            top = newNode;
            newNode->next = NULL;
        }

        else 
        {
            newNode->next = top;
            top = newNode;
        }
    }

    void pop(T& v)
    {
        NodeS<T>* temp;  

        if (isEmpty())
        {
            cout << "A pilha esta vazia" << endl;
        }
        else
        {
            v = top->valor;
            temp = top->next;
            delete top;
            top = temp;
        }
    }

    bool isEmpty()
    {
        if (!top)
        {
            return true;
        }

        else
        {
            return false;
        }
    }
  
    T Top()
    {
        if (isEmpty())
        {
            cout << "A stack esta vazia" << endl;
        }

        else
        {
            return top->valor;
        }
    
    }
    int tamanho()
    {
        NodeS<T>* nodeAtual;	
        NodeS<T>* nextNode;	
        int stackTam = 0;

        nodeAtual = top;
        while (nodeAtual != NULL)
        {
            nodeAtual = nodeAtual->next;
            stackTam++;
        }

        return stackTam;
    }
    void listar() const
    {
        NodeS<T>* P;

        P = top;

        while (P)
        {
            cout << P->valor << endl;

            P = P->next;
        }
        cout << endl;
    }
};
