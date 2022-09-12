/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:50:17 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/12 20:11:44 by amealha-         ###   ########.fr       */
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
	while (*str == 32 || (*str >= 9 && *str <=13))
		str++;
	if (*str == '-')
		sign *= -1;
	if(*str == '-' || *str == '+')
		sign++;
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
	int result2; 
	
	if (ac == 2)
	{
		result = ft_atoi(av[1]);
		result2 = atoi(av[1]);
		printf("%d --- %d\n", result, result2);
	}
	return (0);
 
}
