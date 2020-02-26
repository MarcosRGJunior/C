#ifndef LISTA_H
#define LISTA_H

typedef struct sCelula {
	int dado;
	struct sCelula * prox;
} Celula;

typedef struct sLista {
	Celula * inicio;
} Lista;

void iniciarLista(Lista * lista);
void inserirInicio(Lista * lista, int dado);
void imprimir(Lista * lista);
void excluirInicio(Lista * lista);
Celula * busca(Lista * lista, int x);
void excluirProximo(Lista * lista, Celula * p);
void inserirProximo(Lista * lista, Celula * p, int dado);
void inverter(Lista * lista);
void countElementos(Lista * lista);
void countAntes(Lista * lista, Celula * p);
void countDepois(Lista * lista, Celula * p);
	
#endif
