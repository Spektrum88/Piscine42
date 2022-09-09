#include <stdio.h>

void proto(int n)
{
	if(n > 0)
		printf("Positif");
	else if (n == 0)
		printf("Neutro");
	else
		printf("negatif");
}
