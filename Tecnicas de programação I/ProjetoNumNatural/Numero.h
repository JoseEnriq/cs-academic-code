#ifndef NUMERO_H
#define NUMERO_H
#include <iostream>

using namespace std;

class Numero
{
	private:
		int num, quadradoPerfeito, primo, mudancaBase, MDC, MMC;
		long long int Fat, numPerfeito;
		string pertenceN, numString, capicua;
		
	public:
		void setNum();
		int getNum();
		
		void setNumString();
		string getNumString();
		
		void setPertenceN(string Nstring);
		string getPertenceN();
		
		void setFat(int N);
		long long int getFat();
		
		void setNumPerfeito(long long int N);
		long long int getNumPerfeito();
		
		void setCapicua(string N);
		string getCapicua();
		
		void setQuadradoPerfeito(long long int N);
		int getQuadradoPerfeito();
		
		void setPrimo(int N);
		int getPrimo();
		
		void setMudancaBase(int N);
		
		void setMDC(int N1, int N2);
		int getMDC();
		
		void setMMC(int N1, int N2);
		int getMMC();
		
		
};

#endif
