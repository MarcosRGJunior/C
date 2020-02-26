#include <stdio.h>
#include <stdlib.h>
int main () {
	int num, count=1;
    
    printf("Digite um numero: "); // multiplos de 3 do número digitado;
	scanf("%d", &num); 
    
    printf("\nMULTIPLOS de (3) \t \n");
        
	while(count <=num)
	{
		if (count%3 == 0)
		printf("%d \t \n", count);
		
		count++;
	}
	return 0;
}
