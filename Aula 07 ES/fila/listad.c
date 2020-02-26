#include <stdlib.h>
#include <stdio.h>
#include "listad.h"
void iniciarLista(ListaD * lista) {
	lista->inicio = NULL;
	lista->final = NULL;
}
void imprimir(ListaD * lista) {
	CelulaD * p;
	printf( "[" );
	for( p = lista->inicio; p != NULL; p = p->prox ) {
		printf( "%d ", p->dado );
	}
	printf("]\n");
}
void inserirInicio( ListaD * lista, int dado ) {
	CelulaD * p = (CelulaD*) malloc( sizeof(CelulaD)); // cria célula nova
	p->dado = dado; // guarda dado
	p->prox = lista->inicio; // próximo da nova recebe início
	p->ant = NULL; // anterior da nova é NULL
	if ( lista->inicio != NULL ) {
		lista->inicio->ant = p; // anterior do início é a  nova célula
	} else {
		lista->final = p;
	}
	lista->inicio = p;
}

void inserirFinal(ListaD * lista, int dado) {
	CelulaD * p = (CelulaD*) malloc( sizeof(CelulaD)); // cria célula nova
	p->dado = dado;
	p->ant = lista->final;
	p->prox = NULL;
	if ( lista->final != NULL ) {
		lista->final->prox = p;
	} else {
		lista->inicio = p;
	}
	lista->final = p;
} 

CelulaD * buscar(ListaD * lista, int dado) {
	CelulaD * p;
	for( p = lista->inicio; p != NULL; p = p->prox ) {
		if ( p->dado == dado ) {
			return p;
		}
	}
	return NULL;
}

void excluir(ListaD * lista, CelulaD *p ) {
	if ( p->ant != NULL ) {
		p->ant->prox = p->prox;
	} else {
		lista->inicio = p->prox;
	}
	if ( p->prox != NULL ) {
		p->prox->ant = p->ant;
	} else {
		lista->final = p->ant;
	}
	free(p);
}
