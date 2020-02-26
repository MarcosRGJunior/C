#include <stdio.h>
#include <stdlib.h>
#include "listad.h"

void iniciarListaD(ListaD * lista)
{
	lista->inicio = NULL;
	lista->fim = NULL;
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
	else // quando a lista está vazia tem que identificar que a celula seja a unica, primeira e ultima
	{
		lista->fim = p;
	}
	lista->inicio=p; //6
}


CelulaD * buscar(ListaD * lista, int x)
{
	CelulaD * p;
	for( p = lista->inicio; p!= NULL; p= p->prox)
	{
		if(p->dado ==x)
		{
			return p;
		}
	}
	return NULL;
}

void excluir (ListaD * lista, CelulaD * p)
{
	if(p->ant != NULL)
	{
		p->ant->prox = p->prox;
	}
	else
	{
		// p está no inicio, pois o anterior é vazio
		lista->inicio = p->prox;
	}
	if(p->ant != NULL)
	{
		p->prox->ant = p->ant;
	}
	else
	{
		// p está no final, pois o proximo é vazio
		lista->fim = p->ant;
	}
	free(p);
}
