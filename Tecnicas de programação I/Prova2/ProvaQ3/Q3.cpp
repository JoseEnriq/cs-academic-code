#include "Q3.h"
#include <iostream>

using namespace std;

void Q3::setSt()
{
	cin.getline(st, 501);
}

void Q3::numCaracter()
{
	int cont=0;
	int i=0;
	
	while(st[i]!='A' || st[i]=='a')
	{
		cont++;
		
		i++;
	}
	
	cout << cont << endl;
}

