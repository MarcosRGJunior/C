#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int count=1; // tabuada do 12 ao 15;
	int num;
	int a=12;
	 
	 for(a=12;a<=15;a++)
	 {	count=1;
	 	printf("\n TABUADA DO (%d) \n", a);
		while(count<=10)
		{
			num=count*a;
			printf ("\n %d * %d = %d \n", a, count, num);
			count++;
		}
			
	}
	return 0;
}
