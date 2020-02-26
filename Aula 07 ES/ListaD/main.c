#include <stdio.h>
#include <stdlib.h>
#include "listad.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	ListaD lista;
	CelulaD *p;
	iniciarLista(&lista);
	inserirInicio(&lista, 1);
	inserirInicio(&lista, 2);
	inserirInicio(&lista, 3);
	inserirInicio(&lista, 4);
	inserirInicio(&lista, 5);
	imprimir(&lista);
	p = buscar(&lista, 2);
	excluir(&lista, p);
	imprimir(&lista);
	return 0;
}
