#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	int count=1;
	float num;
	float a; // varios conjuntos de 3 números, soma, produto e média;
	float b;  
    float c; 
    float soma; 
	float multi;
	float media; 
   
    for(count=1; count<=3; count++)
		{
			printf("(CONJUNTO %d) \n\n", count);
			
			printf("Digite o numero: ");
			scanf("%f", &a);
			printf("Digite o numero: ");
			scanf("%f", &b);
			printf("Digite o numero: ");
			scanf("%f", &c);
			
			soma=a+b+c;
			printf("\nSoma: %.2f \n", soma);
			multi=a*b*c;
			printf("\nMutiplicao: %.2f \n", multi);
			media=(a+b+c)/3;
			printf("\nMedia: %.2f \n\n", media);
        }

	return 0;
}
