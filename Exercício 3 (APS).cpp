#include <stdio.h>
#include <stdlib.h>
int main () {
	int count=5;
    
    printf("MULTIPLOS DE (5) \t \n"); // multiplos de 5 entre 1 e 50;
    
	while(count <=50)
	{
		if (count%5 == 0)
		printf("%d \t \n", count);
		
		count++;
	}
	return 0;
}
