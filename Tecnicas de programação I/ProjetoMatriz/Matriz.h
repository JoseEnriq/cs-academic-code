#ifndef MATRIZ_H
#define MATRIZ_H

class Matriz
{
	private:
		int** M;
		int L, C;
	
	public:
		Matriz(int l, int c);
		~Matriz();
		
		void setMatriz();
		void getMatriz();
		
		bool Soma(Matriz A, Matriz B);
		bool Subtracao(Matriz A, Matriz B);
		bool Multiplica(Matriz A, Matriz B);
		bool TriangularSuperior();
		bool TriangularInferior();
		bool Simetrica();
		bool Identidade();
		bool Transposta(Matriz &A);
		void Potencia(Matriz A);
		void MultK(Matriz A, int K);
		bool Igual(Matriz A, Matriz B);
		
};

#endif
