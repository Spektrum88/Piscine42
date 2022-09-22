/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 19:36:36 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/22 20:08:12 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int *total;
	
	if (min >= max)
		return (0);
	
	total = malloc(sizeof(int) * i);
		if (total == 0)
		{	
			*range = NULL;
			return (-1);
		}
	i = 0;
	*range = total;
	while (max > min)
	{
		total[i] = min;
		i++;
	}
	return (i);
}

#include <stdio.h>
int main()
{
	int *t;
	int i;
	int size;
	int min;
	int max;
	
	i = 0;
	min = 100;
	max = 120;
	size = ft_ultimate_range(&t, min, max);
	while (i < size)
	{
		printf("%d\n", t[i]);
		i++;
	}
	
}

