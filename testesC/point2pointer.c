#include <stdio.h>

int main (void)
{

	int a;
	int *ptr;

	a = 10;
	ptr = &a;
	printf("%d\n", *ptr);
	
	return(0);
}
