#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
#include <random>

using namespace std;

// Função para verificar se um número é primo
bool verificaPrimo(int n) 
{
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    
    return true;
}

// Função para preencher a pilha com números primos aleatórios
void preencherPilha(stack<int>& pilha)
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(2, 10000); // Intervalo para os números primos

    int count = 0;
    while (count < 1000) 
    {
        int num = dist(gen); // Gera um número aleatório
        if (verificaPrimo(num)) // Verifica se é primo
        { 
            pilha.push(num); // Adiciona à pilha
            count++;
        }
    }
}

// Definição de um nó de árvore binária
struct Node 
{
    int data;
    Node* left;
    Node* right;
};

// Função para criar um novo nó da árvore binária
Node* createNode(int value) 
{
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = newNode->right = nullptr;
    
    return newNode;
}

// Função para inserir valores da pilha na árvore binária balanceada
Node* inserirArvore(stack<int>& pilha, int start, int end) 
{
    if (start > end) // Caso base
        return nullptr;

    int mid = (start + end) / 2;
    int data = pilha.top(); // Obtém o valor do topo da pilha
    pilha.pop();

    Node* root = createNode(data);
    root->left = inserirArvore(pilha, start, mid - 1);
    root->right = inserirArvore(pilha, mid + 1, end);
    
    return root;
}

// Função para percorrer a árvore binária em ordem
void ordemTraversal(Node* root) 
{
    if (root == nullptr) return;

    ordemTraversal(root->left);
    cout << root->data << " ";
    ordemTraversal(root->right);
}

int main() 
{
    stack<int> pilha;
    preencherPilha(pilha);

    Node* root = inserirArvore(pilha, 0, 999); // Inserindo na árvore balanceada

    cout << "Valores da árvore binária balanceada:" << endl;
    ordemTraversal(root);
    cout << endl;

    return 0;
}
