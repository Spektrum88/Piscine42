/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:38:29 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/17 14:40:40 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	rest;
	int	sign;

	rest = 0;
	sign = 1;
	while (*str == ' ' || *str == '\f' || *str == '\n' || *str == '\r'
		|| *str == '\t' || *str == '\v' || *str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			sign *= -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		rest = rest * 10 + *str - '0';
		str++;
	}
	return (rest * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main()
{
		int result;
		int result2;

		result = ft_atoi("---++--++125a4");
		result2 = atoi("----++--++125a4");
		printf("Mine -> [ %d ]\n Original atoi [ %d ]\n", result, result2);

		return (0);
}*/
