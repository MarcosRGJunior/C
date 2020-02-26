#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() 
{
	struct teste
{
	char nome[50];
	int idade;
	char end[100];
};
	struct teste set;
	
	fgets(set.nome,49,stdin);
	fflush(stdin);
	fgets(set.end,99,stdin);
	fflush(stdin);
	scanf("%d", &set.idade);
	fflush(stdin);
	
	
	printf(" \n nome: %s \n idade: %d\n endereco: %s", set.nome, set.idade, set.end);



}


	
