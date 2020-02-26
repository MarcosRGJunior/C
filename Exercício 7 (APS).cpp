
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	int count=1;
	int num;
	int vet[5];	
	int i;
	int j;
	 
    while(count<=5)
		{
			printf("Digite o numero: ");
			scanf("%d", &vet[count]);
			
			count++;
            
		}
		printf("Conforme digitado: \n \t");
		for(count=1; count<=5; count++)
		{
			printf("%d \n \t", vet[count]);
		}
		
		
		for (i=0;i<=5; i++)
		{
		
			for(j=i+1;j<=5;j++)
				{
					if (vet[i]>vet[j])
					{
						num=vet[i];
						vet[i]=vet[j];
						vet[j]=num;
					}
				}
    	}
    	
    	
    printf("Ordem crescente: \n \t");
		for(i=1;i<=5;i++)
		{
		
		printf("%d \n \t",vet[i]);	
		    	
		}
    	
	printf("Ordem decrescente: \n \t");
		for(i=5;i>=1;i--)
			{
			
			printf("%d \n \t",vet[i]);	
			    	
			}

	return 0;
}
