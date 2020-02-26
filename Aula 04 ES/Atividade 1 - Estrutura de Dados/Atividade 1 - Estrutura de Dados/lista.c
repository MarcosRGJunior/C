#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
   
void iniciarLista(Lista * lista) {
	lista->inicio = NULL;
}

void inserirInicio(Lista * lista, int dado) {
	Celula *p;
	p = (Celula*) malloc(sizeof(Celula));
	p->dado = dado;
	p->prox = lista->inicio;
	lista->inicio = p;
}

void imprimir(Lista * lista) {
	Celula *p;
	printf("[ ");
	for(p = lista->inicio; p!=NULL; p = p->prox) {
		printf("%d ", p->dado);
	}
	printf("]\n");
}

void excluirInicio(Lista * lista) {
	Celula *p;
	if(lista->inicio != NULL) {
		p = lista->inicio;
		lista->inicio = p->prox;
		free(p);
 	}
}

Celula * busca(Lista * lista, int x) {
	Celula *p;
	for(p = lista->inicio; p!= NULL; p = p->prox) {
		if(p->dado == x) {
			return p;
		}
	}
	return NULL;
}

void excluirProximo(Lista * lista, Celula * p) {
	if(p != NULL) {
		Celula *q = p->prox;
		if (q != NULL) {
			p->prox = q->prox;
			free(q);
		}
	}
}

void inserirProximo(Lista * lista, Celula * p, int x) {
	Celula * nova;
	nova = malloc(sizeof(Celula));
	nova->dado = x;
	nova->prox = p->prox;
	p->prox = nova;
}

void inverter(Lista * lista) {
	Celula *p, *q, *r;
	if(lista->inicio != NULL & lista->inicio->prox != NULL) {
		p = lista->inicio;
		q = p->prox;
		r = q->prox;
		p->prox = NULL;
		while(q != NULL) {
			q-> prox = p;
			p = q;
			q = r;
			if(r != NULL) {
				r = r->prox;
			}	 
		}
		lista->inicio = p;
	}
}

void countElementos(Lista * lista) {
	Celula *p;
	int count = 0;
	for(p = lista->inicio; p!=NULL; p = p->prox) {
		count++;
	}
	printf("Numero de elementos: [");
	printf("%d", count);
	printf("]\n\n");
}

void countAntes(Lista * lista, Celula * p) {
	int count = 0;
	Celula *t = p;
	for(p = lista->inicio; p != t; p = p->prox) {
		count++;
	}
	printf("Altura (Antes): [");
	printf("%d", count);
	printf("]\n");
}

void countDepois(Lista * lista, Celula * p) {
	int count = 0;
	for(p = p->prox; p != NULL; p = p->prox) {
		count++;
	}
	printf("Profundidade (Depois): [");
	printf("%d", count);
	printf("]\n");
}
