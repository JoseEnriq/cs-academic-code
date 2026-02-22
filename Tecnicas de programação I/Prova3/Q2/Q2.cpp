#include <iostream>

using namespace std;

int func(int N)
{
	if(N==0)
	{
		cout << "X";
		return func(N-1)*N;
	}
	
	cout << "X" << endl;
	return func(N-1)*N;
}


int main()
{
	int N;
	
	N=6;
	
	func(N);
	
	/*
	for(int i=N; i>0; i--)
	{
		int v=0;
		cout << endl;
		while(v!=i)
		{
			cout << "X";
			v++;
		}
		
	}
	*/
}
