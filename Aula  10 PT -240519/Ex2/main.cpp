#include <stdlib.h>
#include <stdio.h>
int media(int n, int v[]); 

int main() 
{
	int v[100], n, m, i;
	
	printf("Digite o comprimento: ");
	scanf("%d", &n);
	fflush(stdin);
		for(i=0; i<n; i++) 
	{
			printf("Digite a posicao %d do vetor: ", i);
			scanf("%d", &v[i]);			
	}
	
	m = media(n, v);
	
	printf("Resultado: %d", m);
}

int media (int n, int v[]) 
{
	
	int i, z=0, m;
		
			for(i=0; i<n; i++) 
	{		
			z= z + v[i];			
	}
	 	m = z/ n;
	 	return m;
}
