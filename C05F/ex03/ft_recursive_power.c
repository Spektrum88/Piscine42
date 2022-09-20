/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:19:18 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/20 17:26:11 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	else if (power > 1)
	{
		return (nb *= ft_recursive_power(nb, power - 1));
	}
	else
		return (nb);
}

/*#include <stdio.h>

int	main()
{
	int n;
	int p;
	n = -3905;
	p = -2720;
	printf("power of [ %d * %d ] is [ %d ]\n", n, p, ft_recursive_power(n, p));
	printf("0 ^ 0 = 1 || [ %d ]\n",ft_recursive_power(0, 0));
	printf("-3905 ^ -2720 = 0 || [ %d ]\n", ft_recursive_power(-3905, -2720));
	printf("-3687 ^ 0 = 1 || [ %d ]\n", ft_recursive_power(-3687, 0));
	printf("1301 ^ 1 = 1301 || [ %d ]\n", ft_recursive_power(1301, 1));
	printf("1 ^ 4 = 1 [ %d ]\n", ft_recursive_power(1, 4));
	printf("-4 ^ 9 = -262144 [ %d ]\n", ft_recursive_power(-4, 9));
}*/
