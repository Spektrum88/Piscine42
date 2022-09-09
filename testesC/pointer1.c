#include <stdio.h>

int main (void)
{
	int a;
	int b;
	int *ptr;
	char c;
	int **ptr1;
	int ***ptr2;
	a = 42;
	ptr = &a;
	printf("%p\n", ptr);
	ptr = &b;
	printf("%p\n", ptr);
	ptr = &c;
	printf("%p\n", ptr);
	ptr2 = ptr1;
	ptr1 = ptr;
	
	printf("%p\n", &ptr1);
	return(0);
}	 	
