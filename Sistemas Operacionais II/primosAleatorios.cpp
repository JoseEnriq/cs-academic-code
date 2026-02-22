#include <iostream>
#include <cstdlib> 

using namespace std;

bool verifcaPrimo(int num) 
{
    if (num <= 1) 
    {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) 
    {
        if (num % i == 0) 
        {
            return false;
        }
    }
    return true;
}

int main() 
{
    while (1) 
    {
        int num = rand() % 1000; 
        if (verifcaPrimo(num))
        {
            cout << "Número primo encontrado: " << num << endl;
        }
    }
    return 0;
}