/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:22:17 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/15 21:18:38 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int 	i;
	
	i = 0;
	while (*str++)
	{
		i++;
	}
	return (i);

}
int main(int ac, char **av)
{
	int sizelen;
	
	sizelen  = ft_strlen(av[1]);
	if (ac == 2)
	{
		while (sizelen--)
		{
			write(1, &av[1][sizelen], 1);
		}
		write(1, "\n", 1);
		return (0);
	}
}

