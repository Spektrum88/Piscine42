/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:44:35 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/18 17:54:59 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 1)
	{
		return (1);
	}
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>

int	main()
{
	 int n;

	n = 0;
	printf("Factorial of -> [ %d ] is [ %d ]\n", n, ft_recursive_factorial(n));
	return (0);
}*/
