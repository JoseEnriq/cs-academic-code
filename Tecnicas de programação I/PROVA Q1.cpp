#include <iostream>

using namespace std;

int soma(int A, int B)
{
	int soma3=0, aux;
	
	if(A>B)
	{
		aux=A;
		A=B;
		B=aux;
	}
	
	for(int i=A; i<=B; i++)
	{
		if(i%3==0)
		{
			soma3+= i;
		}
	}
	
	return soma3;
}

int main()
{
	int N, X, Y, res;
	int i;
	
	cin >> N;
	
	for(i=0; i<N; i++)
	{
		cin >> X >> Y;
		
		res= soma(X,Y);
		
		cout << res << endl;
	}
	
	return 0;
}
