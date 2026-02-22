#ifndef DATA_H
#define DATA_H

#include <iostream>

using namespace std;

class Data
{
	private:
		string dia, mes, ano, conversaoNum, conversaoTexto;
		int formato;
		
	public:
		Data();
		
		void setDia();
		string getDia();
		
		void setMes();
		string getMes();
		
		void setAno();
		string getAno();
		
		void setConversaoNum(int formOrigi, int formDef);
		string getConversaoNum();
		
		void setConversaoTexto(int formOrigi, int formDef);
		string getConversaoTexto();
		
		void setFormato();
		int getFormato();
		
		void texto();
};

#endif
