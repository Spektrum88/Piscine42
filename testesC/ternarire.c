#include <stdio.h>

int main(void)
{
	int a;
	int b;
	
	a = 3;
	
	b = a == 3 ? 12 : 13;

/* terciario = a isto
	if ( a == 3)
		b = 12;
	else
		b =13; */

	printf("%d\n", b);
	printf("%d\n", a == 3 ? 12 : 13); // nao precisa da variavel b neste caso.
}
