#include <stdio.h>

int main()
{
	int tab[10];
	int i;
 	int d;
	int e;
		

	i = 0;
	while (i <= 8 )
	{
		tab[i] = i;
		i++;
	}
	i = 0;
	while (i < 5)
	{
		printf("%d\n", tab[i]);
		i++;
	}
// do while 	
	d = 5;
	do
	{
		printf("%d ",d);
		d++;
	} 
	while ( d < 10);
// end 
// while with break
	e = 10;
	while (e > 5)
	{
		printf("\n%d\n", e);
		break;
		e--;
	}
	printf("The end\n");
	
}
