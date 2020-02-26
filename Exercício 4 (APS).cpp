#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	int count=1;
	int num;
	int par=0;
	int impar=0; // ler números inteiros e positivos, somar pares e ímpares;
	 
    while(count<=5)
		{
			printf("Digite o numero: ", count);
			scanf("%d", &num);
			count++;
			
			if(num>=0)
			{
			
				if(num%2==1)      
				impar=impar+num;  
	            else   
	            par=par+num;
				
			}  
		}
		
printf("\nSoma dos pares: %d \n", par);   
printf("Soma dos impares: %d", impar); 

	return 0;
}
