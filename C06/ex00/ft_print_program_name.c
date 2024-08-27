/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:14:04 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/18 15:51:42 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0x00)
		i++;
	write(1, str, i);
}

int	main(int argc, char **argv)
{
	if (argc >= 0)
	{
		ft_putstr(argv[0]);
		ft_putstr("\n");
	}
	return (0);
}
