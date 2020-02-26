#ifndef FILA_H
#define FILA_H
#include "listad.h"
typedef struct sFila {
	ListaD * lista;
} Fila;
void iniciarFila( Fila * fila );
int filaVazia( Fila * fila );
void push( Fila * fila, int dado );
int pop( Fila * fila );
int peek( Fila * fila );

#endif
