//Projeto de Lista Duplamente Ligada

#include <stdio.h>
#include <stdlib.h>
#include "listad.h"


int main(int argc, char *argv[]) 
{
		ListaD lista;
		
		CelulaD * p;
		CelulaD * x;
		
		iniciarListaD (&lista);
		inserirInicio(&lista, 5);
		inserirInicio(&lista, 4);
		inserirInicio(&lista, 3);
		inserirInicio(&lista, 2);
		inserirInicio(&lista, 1);
		imprimir( &lista);
		
		p = buscar(&lista, 3);
		excluir(&lista, p);
		imprimir( &lista);
		
		x = buscar(&lista, 1);
		excluir(&lista, x);
		imprimir( &lista);
	
	return 0;
}
