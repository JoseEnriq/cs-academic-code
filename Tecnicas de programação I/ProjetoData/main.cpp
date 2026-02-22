#include "Data.h"
#include <locale>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "portuguese");
	Data day;
	
	int format1, format2;
	
	cout << "Qual tipo de formato você deseja digitar a sua data? " << endl;
	cout << "1. Dia/Mês/Ano ex: 01/09/2006" << endl;
	cout << "2. Mês/Dia/Ano ex: 09/01/2006" << endl;
	cout << "3. Dia/Mês/Ano ex: 01/09/06" << endl;
	cout << "4. Mês/Dia/Ano ex: 09/01/06" << endl;
	cout << "5. formato escrito. ex: 1 de setembro de 2006" << endl;
	cout << "6. formato escrito com dia da semana ex: Sexta-feira, 1 de setembro de 2006" << endl;
	cout << endl;
	
	day.setFormato();
 	
	format1= day.getFormato(); 
	
	cout << "Digite uma data entre os anos 2000 e 2021" << endl;
	
	if(day.getFormato()==1 || day.getFormato()==2 || day.getFormato()==3 || day.getFormato()==4 )
	{
		if(day.getFormato()==1 || day.getFormato()==3 )
		{
			cout << "Digite o dia: " << endl;
			day.setDia();
			
			cout << "Digite o Mês: " << endl;
			day.setMes();
			
			cout << "Digite o Ano" << endl;
			day.setAno();
		}
		
		else // formato US
		{
			cout << "Digite o Mês: " << endl;
			day.setMes();
			
			cout << "Digite o dia: " << endl;
			day.setDia();
			
			cout << "Digite o Ano" << endl;
			day.setAno();
		}
		
		cout << "Deseja converter para qual formato? " << endl;
		day.setFormato();
		format2= day.getFormato();
		
		day.setConversaoNum(format1, format2);
		
		cout << endl;
		cout << day.getConversaoNum() << endl;
	}
	
	else // formato 5 e 6
	{
		if(day.getFormato()==6)
		{
			cout << "Digite o dia da semana: " << endl;
			day.setDia();
		}
		
		cout << "Digite o dia: " << endl;
		day.setDia();
			
		cout << "Digite o mes: (por extenso)" << endl;
		day.setMes();
			
		cout << "Digite o ano: " << endl;
		day.setAno();
		
		cout << "Deseja converter para qual formato? " << endl;
		day.setFormato();
		format2= day.getFormato();
		
		day.setConversaoTexto(format1, format2);
		
		cout << endl;
		cout << day.getConversaoTexto() << endl;
	}

	
	return 0;
}
