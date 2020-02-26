#include <stdlib.h>
#include <stdio.h>
int preenche(int n, int v[]); 

int main() 
{
	int v[100], n, i;
	
	printf("Digite o comprimento: ");
	scanf("%d", &n);
	fflush(stdin);
	
	preenche(n, v);
	
	for(i=0; i<n; i++) 
	{
						
			printf("Posicao %d: %d \n", i, v[i]);
	}
	
}

int preenche (int n, int v[]) 
{
	
	int i, z=0, m;
	for(i=0; i<n; i++) 
	{
						
			v[i] = i*2;			
	}
}
