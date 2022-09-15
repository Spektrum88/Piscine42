
#include "libft.h"

void	ft_putnbr(int n)
{
	if (n > 2147483647 || n < -2147483648)
		return ;
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
