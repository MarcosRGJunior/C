#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	int count=1;
	float num;
	float maior=0;
	float menor=0;  // ler 15 números e definir maior e menor;
   
    for(count=1; count<=15; count++)
		{
			printf("Digite o numero: ", count);
			scanf("%f", &num);
			if(count==1)
			{
			maior=num;  
			menor=num;
		    }
            else
			if(num>maior)
            {
            maior=num;
			} 
			else 
			if(num<menor)
            {
            menor=num;
		    }
        }
    printf("\nMaior numero: %.2f \n", maior);   
    printf("Menor numero: %.2f", menor); 

	return 0;
}
