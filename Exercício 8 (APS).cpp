#include <stdio.h>
#include <stdlib.h>
int main () {
	int num, count=1;
    
    printf("Digite um numero: "); // números pares do grupo que foi digitado;
	scanf("%d", &num); 
    
    printf("\nPARES \t \n");
    
	while(count <= num)
	{
		if (count%2 == 0)
		printf("%d \t \n", count);
		
		count++;
	}
	return 0;
}
