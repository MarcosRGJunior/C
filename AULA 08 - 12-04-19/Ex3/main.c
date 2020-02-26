#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct retangulo
{
	int pie;
	int pid; 
	int a;
};

int main() 
{
	struct retangulo teste;
	printf("Digite o ponto interior esquerdo: ");
	scanf("%d", &teste.pie);
	fflush(stdin);


	printf("Digite o ponto interior direito: ");
	scanf("%d", &teste.pid);
	fflush(stdin);
	
	teste.a= teste.pie*teste.pid;
	
	printf("Resultado da area: %d", teste.a);
}
