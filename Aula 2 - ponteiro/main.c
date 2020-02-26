#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//in a sentimental mood - john coltrane

//Ponteiros buscam o endere�o da mem�ria
//Usos do ponteiro: aloca��o dinamica; constru��o de estruturas complexas; passagem de parametros

void troca (int *x, int *y) // dessa forma, com ponteiros, o endere�o � jogado para as variaveis assim podendo modificar o valor
{
	int aux;
	aux=*x;
	*x=*y;
	*y=aux;
}

int main(int argc, char *argv[]) 
{
		int a=1, b=2; // para a funcao
		int x;
		int *p; // Ponteiro para numeros inteiros
		
		x=5;
		
		p = &x; // p = ao endere�o da variavel X
		
		*p = 1; // o endere�o que est� em p ser� =1
		printf("%d\n", x);

		p= NULL; // p = ao vazio (endere�o 0 da memoria que nunca pode ser alterado)

		troca(&a,&b); // Sempre com o & para demonstrar o endere�o da variavel criada
		printf("a= %d  b= %d  \n", a,b);
		
	return 0;
}
