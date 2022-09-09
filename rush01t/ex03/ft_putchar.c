/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngateau <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:35:33 by ngateau           #+#    #+#             */
/*   Updated: 2022/09/04 18:35:38 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printfirstline(int x)
{
	int	i;

	i = 0;
	if (x >= 1)
	{
		write(1, "A", 1);
	}
	while (i < (x - 2))
	{
		write(1, "B", 1);
		i++;
	}
	if (x > 1)
		write(1, "C", 1);
}

void	printlastline(int x, int y)
{
	int	i;

	if (y > 1)
	{
		if (x >= 1)
		{
			write(1, "A", 1);
		}	
		i = 0;
		while (i < (x - 2))
		{
			write(1, "B", 1);
		i++;
		}
		if (x > 1)
			write(1, "C", 1);
	}	
}

void	printmiddle(int x, int y)
{
	int	d;
	int	i;

	if (y >= 3)
	{	
		d = 0;
		while (d < (y - 2))
		{
			if (x >= 1)
			{
				write(1, "B", 1);
			}		
				i = 0;
			while (i < (x - 2))
			{
				write(1, " ", 1);
			i++;
			}
			if (x > 1)
				write(1, "B", 1);
			write(1, "\n", 1);
	d++;
		}
	}
}
