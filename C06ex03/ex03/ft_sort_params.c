/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:52:52 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/17 18:59:16 by amealha-         ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
	{
			i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	main(int argc, char **argv)
{	
	int	i;
    int j;
    char *swp;
	
    i = 1;
    j = i;
	if (argc > 1)
	{
		while (i < argc)
		{
            while (j > 0 && ft_strcmp(argv[j - 1], argv[j]) > 0)
            {
			 swp = argv[j - 1];
             argv[j - 1] = argv[j];
             argv[j] = swp;  
            }
        ft_putstr(argv[i]);
		ft_putstr("\n");
        i++;
		}		
	}
	return (0);
}
