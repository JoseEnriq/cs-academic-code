#include<iostream>

using namespace std;

template <typename T>
T myMax(T x, T y)
{
	return (x > y) ? x : y;
}

int main()
{
	cout << myMax<int>(3, 7) << endl; // chama myMax paraint
	cout << myMax<double>(3.0, 7.0) << endl; // chama myMax para double
	cout << myMax<char>('g', 'e') << endl; // chama myMax para char 
	
	return 0;
}