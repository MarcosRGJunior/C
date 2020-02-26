#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() 
{

	struct ponto
	{
		float x;
		float y;
		float cat;
	};
	
	struct ponto c[2];
	float res;
	int i;
	int teste=2;
	
	for(i=0; i<2;i++)
	{
	
	printf("Digite x: ");
	scanf("%f", &c[i].x);
	printf("Digite y: ");
	scanf("%f", &c[i].y);
	
	}
	c[0].cat = c[1].x - c[0].x;
	c[1].cat = c[1].y - c[0].y;
	res = sqrt(pow(c[0].cat, 2 ) + pow(c[1].cat, 2));
	printf("Resultado: %f", res);
}
