/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 19:06:46 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/22 19:35:27 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	i;

	if (min >= max)
		return (0);
	p = malloc((max - min) * sizeof(int));
	if (p == 0)
		return (0);
	i = 0;
	while (i < (max - min))
	{
		p[i] = min + i;
		i++;
	}
	return (p);
}

/*#include <stdio.h>
#include <string.h>
int main(int ac,char **av )
{
	int *t;
	int min;
	int max;
	int i;
	int  size;
	
	min = 15;
	max = 100;
	i = 0;
	size = max - min;
	t = ft_range(min, max);
	while (i < size)
	{
		printf("%d\n", t[i]);
		i++;
	}
	return (0);
}*/
