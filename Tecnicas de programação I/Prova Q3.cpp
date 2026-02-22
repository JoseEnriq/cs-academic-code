#include <iostream>
#include <cstring>

using namespace std;

void conversao(char *texto, int tam)
{
	for(int i=0; i<tam; i++)
	{
		if(texto[i]=='\n')
		{
			texto[i+1]= texto[i+1] + 32;
			i++;
		}
	}
	
	for(int i=0; i<tam; i++)
	{
		cout << texto[i];
		
		if(texto[i]=='\n')
		{
			cout << endl;
		}
	}
}

int main()
{
	string texto;
	int tam;
	
	getline(cin,texto);
	
	tam= texto.size();
	char textodef[tam];
	
	conversao(textodef, tam);
	
	return 0;
}
