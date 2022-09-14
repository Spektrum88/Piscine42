

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	sum;
	int	sign;
	int	found;

	sum = 0;
	sign = 1;
	found = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13 || *str == '-' || *str == '+'))
	{
		if (*str == '-')
		{
			sign *= -1;
		}
		str++;
	}
	while (*str && found)
	{
		if (*str >= '0' && *str <= '9')
			sum = sum * 10 + *str - '0';
		else
			found = 0;
		str++;
	}
	return (sign * sum);
}

int main(void)
{
	char *s = " --2020";
	printf("%d ", ft_atoi(s));
	return (0);
}
