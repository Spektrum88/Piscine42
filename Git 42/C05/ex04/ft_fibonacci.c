/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:49:34 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/21 13:51:22 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index <= 1)
	{
		return (index);
	}
	else
		return ((ft_fibonacci(index - 1) + ft_fibonacci(index - 2)));
}

/*#include <stdio.h>

int	main()
{
	 int n;

	n = 10;
	printf("Factorial of -> [ %d ] is [ %d ]\n", n, ft_fibonacci(n));
	return (0);
}*/
