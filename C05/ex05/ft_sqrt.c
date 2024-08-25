/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:31:21 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/20 18:37:28 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long	num;

	num = 0;
	while (nb > num * num)
	{
		num++;
	}
	if (nb == num * num)
	{
		return (num);
	}
	else
		return (0);
}

/*#include <stdio.h>

int main()
{
    int	n;
	
	n = -3847;
    printf("Sqrt [ %d ] -> [ %d ]\n", n, ft_sqrt(n));
	printf("Sqrt 2147395600-> %d\n", ft_sqrt(2147395600));
	printf("Sqrt 2147483646-> %d\n", ft_sqrt(2147483646));
	printf("Sqrt 1640045925-> %d\n", ft_sqrt(1640045925));
	printf("Sqrt 1555592481-> %d\n", ft_sqrt(1555592481));
	printf("Sqrt 722298449-> %d\n", ft_sqrt(722298449));
	printf("Sqrt 1418946655-> %d\n", ft_sqrt(1418946655));
	printf("Sqrt 1418946655-> %d\n", ft_sqrt(1418946655));
	printf("Sqrt 286929721-> %d\n", ft_sqrt(286929721));
	printf("Sqrt 1253487339->%d\n", ft_sqrt(1253487339));

	return (0);
}*/
