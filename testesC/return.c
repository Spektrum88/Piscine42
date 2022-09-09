#include <stdio.h>

int retorno(void);

int main(void)
{
	int  i;

	i = 0;
	printf("%d\n", i);

	i = retorno();
	printf("%d\n", i);
	return(0);
}

int retorno(void)
{
	/*int i = 100;
	if (i > 10)
		return(150); -> exemplo return e para*/
	//return(42); -> exemplo
	printf("mais um exemplo\n");
	return(42);
}

