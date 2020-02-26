#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(int argc, char *argv[]) {
	Lista l;
	Celula * p;
	iniciarLista(&l);
	inserirInicio(&l, 1);
	inserirInicio(&l, 0);
	inserirInicio(&l, 3);
	inserirInicio(&l, 4);
	inserirInicio(&l, 5);
	imprimir(&l);
	countElementos(&l);
	
	p = busca(&l, 3);
	inserirProximo(&l, p, 8);	
	inserirProximo(&l, p, 100);
	imprimir(&l);
	countElementos(&l);
	
	p = busca(&l, 8);
	countAntes(&l, p);
	 
	p = busca(&l, 8);
	countDepois(&l, p);
	
	return 0;
}
