//Projeto de Lista Duplamente Ligada

#include <stdio.h>
#include <stdlib.h>
#include "listad.h"


int main(int argc, char *argv[]) 
{
		ListaD lista;
		
		iniciarListaD(&lista);
		
		inserirInicio(&lista, 5);
		inserirInicio(&lista, 4);
		inserirInicio(&lista, 3);
		inserirInicio(&lista, 2);
		inserirInicio(&lista, 1);
		imprimir( &lista);
	
	return 0;
}
