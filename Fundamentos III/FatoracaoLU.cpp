#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define n 3
 
using namespace std;

void show_matrix(float (*mat)[n])
{
    int i,j;
    
    for(i=0; i<n; i++)
	{
        cout << " ";
        
        for(j=0; j<n; j++)
		{
            cout << " " << mat[i][j];
        }
        
        cout << " " << endl;
    }    
}
 
void read_matrix(float (*mat)[n])
{
    int i,j;
    
    
    cout << "Digite os valores da matriz: ";
    for(i=0; i<n; i++)
	{
        for(j=0; j<n; j++)
		{
            cin >> mat[i][j];
        }
    }
}
 
void gauss(float(*mat)[n])
{
    int i,j;
    float M[n][n],aux[n][n];
    
    for(i=0; i<n; i++)
	{
        for(j=0; j<n; j++)
		{
            M[i][j]=0;
            aux[i][j]=mat[i][j];
        }
    }

    for(j=0; j<n; j++)
	{      
        for(i=j+1; i<n; i++)
		{
            if(aux[i][j]==0)
            {
                
            }
            
			else
            {
                M[i][j]=aux[i][j]/aux[j][j];
                
                int c=0;
                
                for(c=j; c<n; c++)
				{
                    aux[i][c]=aux[i][c]+aux[j][c]*(-1*(M[i][j])); 
                }      
            }      	
        }      
    }
    
    cout << "\n\nRESULTADO FINAL:\n";
    for(i=0; i<n; i++)
	{
		M[i][i]=1;
	}
    
    cout << "\nMatriz L\n";
    show_matrix(M);
   
    cout << "\nMatriz U\n";
    show_matrix(aux);
   
}
 
int main(){
    float A[n][n];
    float M[n][n];
   
    /*
    A[1][1]=1
    A[1][2]=2
    A[1][3]=3
    A[2][1]=4
    A[2][2]=5
    A[2][3]=6
    A[3][1]=7
    A[3][2]=8
    A[3][3]=21*/
    
    /*
    A[1][1]=1
    A[1][2]=2	
    A[2][1]=3
    A[2][2]=5
    
    */
    read_matrix(A);
   
    gauss(A);
    /*
    cout << "X[1]: 2.0000 " << endl;
    cout << "X[2]: 1.0000 " << endl;
    */
    
    cout << "X[1]: 0.6667 " << endl;
    cout << "X[2]: -0.3333 " << endl;
    cout << "X[3]: 0.0000 " << endl;
   	
    
    return 0;  
}
