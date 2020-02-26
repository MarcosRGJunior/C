#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//in a sentimental mood - john coltrane

//Ponteiros buscam o endereço da memória
//Usos do ponteiro: alocação dinamica; construção de estruturas complexas; passagem de parametros

void troca (int *x, int *y) // dessa forma, com ponteiros, o endereço é jogado para as variaveis assim podendo modificar o valor
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
		
		p = &x; // p = ao endereço da variavel X
		
		*p = 1; // o endereço que está em p será =1
		printf("%d\n", x);

		p= NULL; // p = ao vazio (endereço 0 da memoria que nunca pode ser alterado)

		troca(&a,&b); // Sempre com o & para demonstrar o endereço da variavel criada
		printf("a= %d  b= %d  \n", a,b);
		
	return 0;
}
