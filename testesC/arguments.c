#include <stdio.h>

float exe(int, float);

int main(void)
{
	float i;
	
	i = exe(4, 2);	
	printf("%f\n", i);
	return(0);

}
float exe(int a, float x)
{
	printf("mais um exemplo\n");
	return(a * x);
	
}
