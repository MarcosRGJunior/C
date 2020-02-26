#ifndef LISTAD_H
#define LISTAD_H
typedef struct sCelulaD {
	int dado;
	struct sCelulaD * prox;
	struct sCelulaD * ant;
} CelulaD;
typedef struct SListaD {
	CelulaD * inicio;
	CelulaD * final;
} ListaD;
void iniciarLista( ListaD * lista );
void imprimir( ListaD * lista );
void inserirInicio( ListaD * lista, int dado );
void inserirFinal( ListaD * lista, int dado );
CelulaD * buscar( ListaD * lista, int dado );
void excluir( ListaD * lista, CelulaD * p );
#endif

