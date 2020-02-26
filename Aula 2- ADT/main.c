#include <stdio.h> //comando para incluir o arquivo fonte no diretorio do compilador
#include <stdlib.h>
#include "ponto.h"


int main(int argc, char *argv[]) 
{
		Ponto p;
		iniciarPonto(&p, 1, 2);
	printf("%f\n", obterX(&p));

	return 0;
}
