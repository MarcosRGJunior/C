#ifndef LISTAD_H
#define LISTAD_H

typedef struct sCelulaD // O que é inserido na Lista 
{
	int dado;
	struct sCelulaD * ant;
	struct sCelulaD * prox;
} CelulaD;

typedef struct sListaD
{
	
	CelulaD * inicio;
	
} ListaD;


void iniciarListaD( ListaD * lista);
void imprimir( ListaD * lista);
void inserirInicio( ListaD * lista, int dado);
CelulaD * buscar( ListaD * lista, int x);
void excluir( ListaD * lista, CelulaD * p);
#endif
