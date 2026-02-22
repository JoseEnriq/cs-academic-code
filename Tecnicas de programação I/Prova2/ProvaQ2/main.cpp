#include <iostream>
#include "Q2.h"

using namespace std;

int main() 
{
	Q2 data;
	int dia, mes, ano;
	int rep=1;
	
	while(rep!=0)
	{
		cout << "Digite o dia: " << endl;
		cin >> dia;
		data.setDia(dia);
		
		cout << "Digite o mes: " << endl;
		cin >> mes;
		data.setMes(mes);
		
		cout << "Digite o ano: " << endl;
		cin >> ano;
		data.setAno(ano);
		
		cout << "Data recuada: " << endl;
			
		data.setVolta(data.getDia(), data.getMes(), data.getAno());
		
		cout<< "Deseja continuar?(sim-1 nao-0) " << endl;
		cin >> rep;
		
	}
	
}
	
