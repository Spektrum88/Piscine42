/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:19:18 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/18 18:46:59 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power != 0)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	else
		return (1);
}
/*
#include <stdio.h>

int	main()
{
	int n;
	int pwer;
	n = 2;
	p = 3;
	printf("power of [ %d * %d ] is [ %d ]\n", n, p, ft_recursive_power(n, p));
}*/
