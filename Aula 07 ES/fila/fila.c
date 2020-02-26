#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
#include "listad.h"
void iniciarFila( Fila * fila ) {
	fila->lista = (ListaD*) malloc( sizeof(ListaD));
	iniciarLista(fila->lista);
}
int filaVazia( Fila * fila ) {
	return fila->lista->inicio == NULL;
}
void push( Fila * fila, int dado ) {
	inserirFinal( fila->lista, dado );
}
int pop( Fila * fila ) {
	int result = fila->lista->inicio->dado;
	excluir( fila->lista, fila->lista->inicio );
	return result;
}
int peek( Fila * fila ) {
	int result = fila->lista->inicio->dado;
    return result;
}

