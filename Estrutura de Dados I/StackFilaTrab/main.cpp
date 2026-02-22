#include <iostream>
#include <fstream>
#include "StackFila.h"

using namespace std;

int main() 
{
	Thing vet[13];
	Node n;
	Stack torre1, torre2, torre3, torre4, torre5, torre6;
	Queue jogador1, jogador2, jogador3, jogador4;
	
	ifstream arq;
	arq.open("fichas.txt");
	
	char test[3];
	
	
	char cor;
	int azul, vermelho, roxo, branco;
	
	cout << "Cores (A)Azul, (V)Vermelho, (R)Roxo, (B)Branco" << endl;
	cout << "Jogador1 escolha sua cor:" ;
	cin >> cor;
	if(cor=='A') azul=1;
	else if(cor== 'V') vermelho=1;
	else if(cor== 'R') roxo=1;
	else if(cor== 'B') branco=1;
	
	while(!arq.eof())
	{
		int i=0;
		
		for(int j=0; j<3; j++) // pegando o valor das fichas em char
		{
			arq >> test[j];
		}
		
		if(test[1]==cor)
		{	
			for(int j=0; j<3; j++)// fazendo a classe thing guardar
			{
				vet[i].ficha[j]= test[j];
			}
			
			jogador1.Push(&vet[i]); // colocando na fila do jogador 1
			i++;
		}
		
		if(test[0]=='1' && test[1]== 'P')
		{
			for(int j=0; j<3; j++)
			{
				vet[i].ficha[j]= test[j];
			}
			
			jogador1.Push(&vet[i]); 
			i++;
		}
	}
	
	arq.close();
	arq.open("fichas.txt");
	
	
	cout << "Jogador2 escolha sua cor:";
	cin >> cor;
	if(cor=='A') azul=2;
	else if(cor== 'V') vermelho=2;
	else if(cor== 'R') roxo=2;
	else if(cor== 'B') branco=2;
	
	while(!arq.eof())
	{
		int i=0;
		
		for(int j=0; j<3; j++)
		{
			arq >> test[j];
		}
		
		if(test[1]==cor)
		{	
			for(int j=0; j<3; j++)
			{
				vet[i].ficha[j]= test[j];
			}
			
			jogador2.Push(&vet[i]); 
			i++;
		}
		
		if(test[0]=='2' && test[1]== 'P')
		{
			for(int j=0; j<3; j++)
			{
				vet[i].ficha[j]= test[j];
			}
			
			jogador2.Push(&vet[i]); 
			i++;
		}
	}
	
	arq.close();
	
	arq.open("fichas.txt");
	
	
	cout << "Jogador3 escolha sua cor:";
	cin >> cor;
	if(cor=='A') azul=3;
	else if(cor== 'V') vermelho=3;
	else if(cor== 'R') roxo=3;
	else if(cor== 'B') branco=3;
	
	while(!arq.eof())
	{
		int i=0;
		
		for(int j=0; j<3; j++) 
		{
			arq >> test[j];
		}
		
		if(test[1]==cor)
		{	
			for(int j=0; j<3; j++)
			{
				vet[i].ficha[j]= test[j];
			}
			
			jogador3.Push(&vet[i]); 
			i++;
		}
		
		if(test[0]=='3' && test[1]== 'P')
		{
			for(int j=0; j<3; j++)
			{
				vet[i].ficha[j]= test[j];
			}
			
			jogador3.Push(&vet[i]); 
			i++;
		}
	}
	
	arq.close();
	
	arq.open("fichas.txt");
	
	
	cout << "Jogador4 escolha sua cor:";
	cin >> cor;
	if(cor=='A') azul=4;
	else if(cor== 'V') vermelho=4;
	else if(cor== 'R') roxo=4;
	else if(cor== 'B') branco=4;
	
	while(!arq.eof())
	{
		int i=0;
		
		for(int j=0; j<3; j++)
		{
			arq >> test[j];
		}
		
		if(test[1]==cor)
		{	
			for(int j=0; j<3; j++)
			{
				vet[i].ficha[j]= test[j];
			}
			
			jogador4.Push(&vet[i]); 
			i++;
		}
		
		if(test[0]=='4' && test[1]== 'P')
		{
			for(int j=0; j<3; j++)
			{
				vet[i].ficha[j]= test[j];
			}
			
			jogador4.Push(&vet[i]); 
			i++;
		}
 }
	

	
	arq.close();
	
	int i1=0, i2=0, i3=0, i4=0, i5=0, i6=0;
	int v;
	
	int j=0;
	while(i1!=6 && i2!=6 && i3!=6 && i4!=6 && i5!=6 && i6!=6)
	{
		char f[3];
		
		if(i1!=6)
		{	
			jogador3.Front(&vet[j]);
			
			for(int l=0; l<3; l++)
			{
				f[l]= vet[j].ficha[l]; //strcpy
			}
			
			
			if(f[2]=='P')
			{
				if(f[3]=='1')
				{
					torre1.Pop(&vet[j]); // se for preta desinfileira
					i1--;
				}
				
			}
			else
			{
				if(f[3]=='1')
				{
					jogador3.Front(&vet[j]); 
					torre1.Push(&vet[j]); // jogador empilha a ficha na torre
					jogador3.Pop(&vet[j]); // ficha sai da sua mao
					i1++;
				}	
			}
		}
		
		if(i2!=6)
		{	
			jogador1.Front(&vet[j]);
			
			for(int l=0; l<3; l++)
			{
				f[l]= vet[j].ficha[l];
			}
			
			
			if(f[2]=='P')
			{
				if(f[3]=='2')
				{
					torre2.Pop(&vet[j]);
					i2--;
				}
				
			}
			else
			{
				if(f[3]=='2')
				{
					jogador1.Front(&vet[j]);
					torre2.Push(&vet[j]);
					jogador1.Pop(&vet[j]);
					i2++;
				}
					
			}
		}
		
		if(i3!=6)
		{	
			jogador2.Front(&vet[j]);
			
			for(int l=0; l<3; l++)
			{
				f[l]= vet[j].ficha[l];
			}
			
			
			if(f[2]=='P')
			{
				if(f[3]=='3')
				{
					torre3.Pop(&vet[j]);
					i3--;
				}
			}
			else
			{
				if(f[3]=='3')
				{
					jogador2.Front(&vet[j]);
					torre3.Push(&vet[j]);
					jogador2.Pop(&vet[j]);
					i3++;
				}	
			}
		}
		
		if(i4!=6)
		{	
			jogador4.Front(&vet[j]);
			
			for(int l=0; l<3; l++)
			{
				f[l]= vet[j].ficha[l];
			}
			
			
			if(f[2]=='P')
			{
				if(f[3]=='4')
				{
					torre4.Pop(&vet[j]);
					i4--;
				}
			}
			
			else
			{
				if(f[3]=='4')
				{
					jogador4.Front(&vet[j]);
					torre4.Push(&vet[j]);
					jogador4.Pop(&vet[j]);
					i4++;
				}	
			}
		}
		
		if(i5!=6)
		{	
			jogador3.Front(&vet[j]);
			
			for(int l=0; l<3; l++)
			{
				f[l]= vet[j].ficha[l];
			}
			
			
			if(f[2]=='P')
			{
				if(f[3]=='5')
				{
					torre5.Pop(&vet[j]);
					i5--;
				}
			}
			
			else
			{
				if(f[5]=='5')
				{
					jogador3.Front(&vet[j]);
					torre1.Push(&vet[j]);
					jogador3.Pop(&vet[j]);
					i5++;
				}
			}
		}
		
		if(i6!=6)
		{	
			jogador1.Front(&vet[j]);
			
			for(int l=0; l<3; l++)
			{
				f[l]= vet[j].ficha[l];
			}
			
			
			if(f[2]=='P')
			{
				if(f[3]=='6')
				{
					torre6.Pop(&vet[j]);
					i6--;
				}
			}
			else
			{
				if(f[3]=='6')
				{
					jogador1.Front(&vet[j]);
					torre2.Push(&vet[j]);
					jogador1.Pop(&vet[j]);
					i6++;
				}	
			}
		}
		
		j++;
		
	}
	
	
	cout << "O jogo durou: " << j << " rodadas" << endl << endl;
	cout << "Torre 1:" << endl;
	if(torre1.IsEmpty()) cout << "vazia" << endl;
	for(int i=0; i<6; i++)
	{	
		
		if(torre1.TOP(&vet[i])==true)
		{
			cout << vet[i].ficha << endl;
			torre1.Pop(&vet[i]);
		}
	}
	
	cout << endl;
	
	cout << "Torre 2:" << endl;
	if(torre2.IsEmpty()) cout << "vazia" << endl;
	for(int i=0; i<6; i++)
	{
		
		if(torre2.TOP(&vet[i])==true)
		{
			cout << vet[i].ficha << endl;
		
			torre2.Pop(&vet[i]);
		}
		
	}
	
	cout << endl;
	
	cout << "Torre 3:" << endl;
	if(torre3.IsEmpty()) cout << "vazia" << endl;
	for(int i=0; i<6; i++)
	{
		
		if(torre3.TOP(&vet[i])==true)
		{
			cout << vet[i].ficha << endl;
		
			torre3.Pop(&vet[i]);	
		}
		
	}
	
	cout << endl;
	
	cout << "Torre 4:" << endl;
	if(torre4.IsEmpty()) cout << "vazia" << endl;
	for(int i=0; i<6; i++)
	{
		
		if(torre4.TOP(&vet[i])==true)
		{
			cout << vet[i].ficha << endl;
		
			torre4.Pop(&vet[i]);
		}
		
	}
	
	cout << endl;
	int ven=3;
	cout << "Torre5:" << endl;
	if(torre5.IsEmpty()) cout << "vazia" << endl;
	for(int i=0; i<6; i++)
	{
		
		if(torre5.TOP(&vet[i])==true)
		{
			cout << vet[i].ficha << endl;
		
			torre5.Pop(&vet[i]);	
		}
		
	}
	
	cout << endl;
	
	cout << "Torre 6:" << endl;
	if(torre6.IsEmpty()) cout << "vazia" << endl;
	for(int i=0; i<6; i++)
	{
		if(torre6.TOP(&vet[i])==true)
		{
			cout << vet[i].ficha << endl;
		
			torre6.Pop(&vet[i]);
		}
	}
	
	cout << endl;
	
	cout << "Jogador " << ven << " vence" << endl << endl;
	Thing vet2[6];
	
	cout << "Fichas restantes do jogador 1: " << endl;
	if(jogador1.IsEmpty()) cout << "Nao sobraram fichas" << endl;
	for(int i=0; i<6; i++)
	{	
		if(jogador1.Front(&vet2[i])==true)
		{
			cout << vet2[i].ficha << endl;
			jogador1.Pop(&vet2[i]);
		}
	}
	cout << "Fichas restantes do jogador 2: " << endl;
	if(jogador2.IsEmpty()) cout << "Nao sobraram fichas" << endl;
	for(int i=0; i<6; i++)
	{	
		if(jogador2.Front(&vet2[i])==true)
		{
			cout << vet2[i].ficha << endl;
			jogador2.Pop(&vet2[i]);
		}
	}
	
	cout << "Fichas restantes do jogador 3: " << endl;
	if(jogador3.IsEmpty()) cout << "Nao sobraram fichas" << endl;
	for(int i=0; i<6; i++)
	{	
		if(jogador3.Front(&vet2[i])==true)
		{
			cout << vet2[i].ficha << endl;
			jogador3.Pop(&vet2[i]);
		}
	}
	cout << "Fichas restantes do jogador 4: " << endl;
	if(jogador4.IsEmpty()) cout << "Nao sobraram fichas" << endl;
	for(int i=0; i<6; i++)
	{	
		if(jogador4.Front(&vet2[i])==true)
		{
			cout << vet2[i].ficha << endl;
			jogador4.Pop(&vet2[i]);
		}
	}
	
	
	return 0;
}

