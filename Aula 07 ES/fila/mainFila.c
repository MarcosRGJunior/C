#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
#include "listad.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	Fila fila;
	iniciarFila(&fila);
	push(&fila, 1);
	push(&fila, 2);
	push(&fila, 3);
	printf("%d\n", pop(&fila));
	printf("%d\n", pop(&fila));
	printf("%d\n", pop(&fila));
	return 0;
}
