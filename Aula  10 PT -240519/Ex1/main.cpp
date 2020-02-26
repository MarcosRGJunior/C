#include <stdlib.h>
#include <stdio.h>
int troca(int *x, int *y);

int main() 
{
	int x; 
	int y;
	
	printf("Digite X: ");
	scanf("%d", &x);
	printf("Digite Y: ");
	scanf("%d", &y);
	
	troca(&x, &y); // & altera o valor da variavel
	
	printf( "X = %d  e Y= %d", x, y);
	
}

int troca( int *x, int *y) // * indica que a variavel sera mudada fora da funcão! 
{
	int z;
	
	 z = *x;
	*x = *y;
	*y = z;
	
	return *x, *y; 
}
