#include <stdio.h>
#include <stdlib.h>
// http://www.trsampaio.com/2014/08/31/calculo-numerico-computacional-decomposicao-lu/
// Fonte: http://www.trsampaio.com/
#define n 2
 
void show_matrix(float (*mat)[n]){
    int i,j;
    
    for(i=0;i<n;i++)
	{
        printf("|");
        for(j=0;j<n;j++)
		{
            printf(" %.2f",mat[i][j]);
        }
        printf(" |\n");
    }    
}
 
void read_matrix(float (*mat)[n])
{
    int i,j;
    for(i=0;i<n;i++)
	{
        for(j=0;j<n;j++)
		{
            printf("Digite o valor da posicao A[%d][%d]=",i+1,j+1);
            scanf("%f",&mat[i][j]);
        }
    }
}
 
void gauss(float(*mat)[n])
{
    /*
    m21=m21/m11
    m31=m31/m11
    m41=m41/m11
    */
    int i,j;
    float M[n][n],aux[n][n];
    for(i=0;i<n;i++)
	{
        for(j=0;j<n;j++)
		{
            M[i][j]=0;
            aux[i][j]=mat[i][j]; //Criando a matriz auxiliar a imagem da matriz A
        }
    }
    printf("\n***Seja Aux, uma matriz auxiliar como copia da matriz A***\n");
    printf("----Matriz aux antes----\n");
    show_matrix(aux);
    //Calculando os multiplicadores da Gauss
    //Movimenta a coluna
    for(j=0;j<n;j++)
	{      
        printf("\n***Multiplicadores de Gauss da %d coluna***\n",j+1);
        //Movimenta a linha
        for(i=j+1;i<n;i++)
		{
            if(aux[i][j]==0)
            {
                printf("Posicao ja e 0, nao ha necessidade de fazer eliminacao de gauss para este termo!\n");
            }
			else
             {
                M[i][j]=aux[i][j]/aux[j][j];
                printf("M[%d][%d]=%.2f\n",i+1,j+1,M[i][j]);
                //multiplico a linha do multiplicar por -(multiplicador)
                int c=0;
               
                //Movimenta a coluna
                for(c=j;c<n;c++){
                    printf("\n----Multiplicando a %dx%d por %.2f----\n",j+1,c+1,-1*M[i][j]);              
                    show_matrix(aux);
                    printf("\n***Fazendo %.2f * %.2f = %.2f***\n",aux[j][c],-1*M[i][j],aux[j][c]*(-1*(M[i][j])));
                    printf("***Fazendo %.2f + %.2f = %.2f*** POS[%d][%d]\n",aux[j][c]*(-1*(M[i][j])),aux[i][c],aux[i][c]+aux[j][c]*(-1*(M[i][j])),i+1,c+1);
                    aux[i][c]=aux[i][c]+aux[j][c]*(-1*(M[i][j]));
               
                    printf("\n----Matriz aux depois----\n");    
                    show_matrix(aux);
                }      
            }      
            printf("\n");
            //system("pause");
        }//Todos os multiplicadores da coluna j estão definidos
             
    }
    printf("\n\n*********RESULTADO FINAL**********\n");
    for(i=0;i<n;i++) M[i][i]=1;
    printf("\n----Matriz L----\n");
    show_matrix(M);
   
    printf("\n----Matriz U----\n");
    show_matrix(aux);
   
}
 
int main(){
    float A[n][n];
    float M[n][n];
   
    /*A[0][0]=16;
    A[0][1]=-4;
    A[0][2]=12;
    A[0][3]=-4;
    A[1][0]=-4;
    A[1][1]=2;
    A[1][2]=-1;
    A[1][3]=1;
    A[2][0]=12;
    A[2][1]=-1;
    A[2][2]=14;
    A[2][3]=-2;
    A[3][0]=-4;
    A[3][1]=1;
    A[3][2]=-2;
    A[3][3]=83;*/
    read_matrix(A);
    printf("***Seja A a matriz original***\n");
    printf("----Matriz A----\n");
    show_matrix(A);
   
    gauss(A);
   
   
    system("pause");
    return 0;  
}
