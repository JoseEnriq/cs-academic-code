#include <iostream>

using namespace std;

void menu();        

struct Node
{
    int data;
    Node* next;
    Node* prev;
    Node(int);
};

Node::Node(int value)      
{
    data = value;
    next = prev = NULL;
}

class ListaDuplamenteLigada
{
public:
    ListaDuplamenteLigada();
    ~ListaDuplamenteLigada();
    void insert_front(int);
    void insert_back(int);
    int delete_front();
    int delete_back();
    bool is_empty();
    void display();
    int length();
    void search(int);

private:
    Node* head;
    Node* tail;
    int tamanho;

};

ListaDuplamenteLigada::ListaDuplamenteLigada()
{
    head = tail = NULL;
    tamanho = 0;
}

ListaDuplamenteLigada::~ListaDuplamenteLigada()
{
}

void ListaDuplamenteLigada::insert_front(int valor)
{
    Node* temp = new Node(valor);

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
    tamanho++;
}

void ListaDuplamenteLigada::insert_back(int value)
{
    Node* temp = new Node(value);

    if (tail == NULL)
        head = tail = temp;
    else
    {
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
    tamanho++;
}

int ListaDuplamenteLigada::delete_front()
{
    if (!is_empty())
    {
        Node* temp = head;
        if (head == tail)
        {
            tail = NULL;
        }
        int delValue = temp->data;
        head = head->next;

        delete temp;

        tamanho--;

        return delValue;

    }
    return 0;
}

int ListaDuplamenteLigada::delete_back()
{
    if (!is_empty())
    {
        Node* temp = tail;
        if (head == tail)
        {
            head = NULL;
        }
        int delValue = temp->data;
        tail->next = NULL;
        tail = tail->prev;

        delete temp;

        tamanho--;

        return delValue;

    }
    return 0;
}

bool ListaDuplamenteLigada::is_empty()
{
    if (tamanho <= 0)
    {
        return true;
    }

    return false;
}

void ListaDuplamenteLigada::display()
{
    Node* temp = head;

    cout << "\n\nDisplay in forward order\n";
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << " NULL";
}

int ListaDuplamenteLigada::length()
{
    return tamanho;
}

void ListaDuplamenteLigada::search(int value)
{
    if (!is_empty())
    {
        Node* temp = head;
        while (temp)
        {
            if (temp->data == value)
            {
                cout << "YES! got it." << endl;
                break;
            }
            temp = temp->next;
        }
    }
    else
    {
        cout << "List is empty" << endl;
    }
}