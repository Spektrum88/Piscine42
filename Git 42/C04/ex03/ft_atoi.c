/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:38:29 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/22 16:43:38 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	rest;
	int	sign;
	int	i;

	i = 0;
	rest = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\t' || str[i] == '\v')
	{
	i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
	i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		rest = (rest * 10) + (str[i] - '0');
	i++;
	}
	return (rest * sign);
}

/*#include <stdio.h>
#include <stdlib.h>
int	main()
{
		int result;
		int result2;

		result = ft_atoi(" ---+--+1234ab567");
		result2 = atoi("----++--++125a4");
		printf("Mine -> [ %d ]\n Original atoi [ %d ]\n", result, result2);

		return (0);
}*/
