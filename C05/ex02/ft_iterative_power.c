/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:56:48 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/18 18:17:54 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{	
	int	rest;

	rest = 1;
	while (power != 0)
	{
		rest *= nb;
		--power;
	}
	return (rest);
}
/*
#include <stdio.h>

int	main()
{
	int n;
	int pwer;
	n = 3;
	pwer = 4;
	printf("power of [ %d*%d] is [ %d ]\n", n, pwer, ft_iterative_power(n, pwer));
	return (0);
}*/
