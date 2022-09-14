/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:50:17 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/14 19:17:35 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	rest;
	int	sign;

	rest = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13
			|| *str == '+' || *str == '-'))
	{	
		if (*str == '-')
		{
			sign *= -1;
			str++;
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

int	main(int ac, char **av)
{	
	int result;
	
	if (ac == 2)
		{
		result = ft_atoi(av[1]);
		printf("%d", result);	
		}
	return (0);
 
}
