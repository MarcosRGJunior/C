#include <stdio.h>
#include <stdlib.h>
#include "listad.h"

void iniciarListaD(ListaD * lista)
{
	lista->inicio = NULL;
}

void imprimir( ListaD * lista)
{
	CelulaD * p;
	printf( "[");
	for( p = lista->inicio; p!= NULL; p= p->prox)
	{
		printf("%d", p->dado);
	}
	printf("]\n");
}

void inserirInicio( ListaD * lista, int dado)
{
	CelulaD *p;
	p = (CelulaD *) malloc(sizeof(CelulaD)); //1
	p->dado = dado; //2
	p->prox = lista -> inicio; // 3
	p->ant = NULL; //4
	if(lista->inicio != NULL)
	{
		lista->inicio->ant = p; //5
	}
	lista->inicio=p; //6
}
