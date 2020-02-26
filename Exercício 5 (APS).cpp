#include <stdio.h>
#include <stdlib.h>
int main () {
	int count=1;
    
    printf("IMPARES \t \n"); // números impares de 1 a 30;
    
	while(count <=29)
	{
		if (count%2 == 1)
		printf("%d \t \n", count);
		
		count++;
	}
	return 0;
}
