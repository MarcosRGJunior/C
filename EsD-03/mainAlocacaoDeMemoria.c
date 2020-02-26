#include <stdio.h>
#include <stdlib.h>

void excluir (int *v, int n, int p)
{
	int i;
	for(i=p;i<n-1;i++)
	{
		v[i]= v[i+1];
	}
}

void inserir (int *v, int n, int p, int x)
{
	int i;
	
	for(i=n-1; i>p ; i--)
	{
		v[i]= v[i-1];
	}
	
	v[p]= x;
}

int main(int argc, char *argv[]) 
{
	int n,i,p,x;
	int *v;
	
	printf("Digite o tamanho: ");
	scanf("%d", &n);
	
	v = (int*) malloc (n*sizeof(int)); // Sizeof retorna o numero de bytes que são necessarios para o tipo int ocupar na memoria
										// Malloc = ao New em java, que reserva espaço para esse novo tipo
											// (int*) converte o valor do Malloc que vem direto como Void, converte para Int para alocar corretamente em V
	for(i=0;i<n;i++)
	{
		v[i] = i;
	}
		printf("Digite a exclusao: ");
		scanf("%d", &p);
		
		excluir(v, n, p);
		
		
		
		
	for(i=0;i<n;i++)
	{
		printf("%d \n", v[i]);
	}

	printf("Digite a inclusao: "); // Tanto Inclusão e exclusão são O(n), ou seja, são lineares
	scanf("%d", &x);
	printf("Digite a posicao: ");
		scanf("%d", &p);
	inserir(v,n,p,x);
		
	for(i=0;i<n;i++)
	{
		printf("%d \n", v[i]);
	}
	
	
	free(v); // libera a memoria que o malloc aloca
	
	return 0;
}
