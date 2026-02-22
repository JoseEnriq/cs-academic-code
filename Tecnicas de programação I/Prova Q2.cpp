#include <iostream>

using namespace std;

int PAR(int X)
{
	if(X%2!=0)
	{
		return X+1;
	}
	
	else
	{
		return X;
	}
}

int potencia(int A, int B)
{
	int pot=A;
	
	for(int i=0; i<B-1; i++)
	{
		pot*=A;
	}
	
	return pot;
}

int main()
{
	int A, B;
	int res;
	
	cin >> A;
	A= PAR(A);
	
	cin >> B;
	B= PAR(B);
	
	res= potencia(A,B);
	
	cout << res << endl;
		
	return 0;
}
