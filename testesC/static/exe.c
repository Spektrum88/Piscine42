#include <stdio.h>

void exe2(void)
{
	static int a = 0;
	a++;
	printf("%d\n", a);
}

void exe1(void)
{
	exe2();
}
