#ifndef QUADRILATERO_H
#define QUADRILATERO_H

class Quadrilatero
{
	private:
		string tipoQ;
	
	public:
		Quadrilatero();
		~Quadrilatero();
		
	friend ostream &operator << (ostream &, const Telefone &);
    friend istream &operator >> (istream &, const Telefone &);
	
};

#endif
