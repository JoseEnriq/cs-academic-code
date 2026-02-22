#ifndef Q2_H
#define Q2_H

class Q2
{
	private:
		int dia, mes ,ano;
		int volta;
	
	public:
		Q2();
		
		void setDia(int D);
		int getDia();
		
		void setMes(int M);
		int getMes();
		
		void setAno(int A);
		int getAno();
		
		void setVolta(int D, int M, int A);
	
};

#endif
