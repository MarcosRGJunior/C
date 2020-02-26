#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
char palavra[30];
int t, 
count=1;

printf("Digite uma palavra: "); // repetir palavra digitada;
gets(palavra);

for(t=1;t<=4;t++)
{
printf("\n%s \t ", palavra);
count++;
}

return( 0);
} 

