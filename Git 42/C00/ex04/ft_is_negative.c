/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 10:54:37 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/02 14:37:26 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	a;
	char	b;

	a = 'P';
	b = 'N';
	if (n >= 0)
	{
		write(1, &a, 1);
	}
	else
		write(1, &b, 1);
}	

/*int	main(void)
{
	ft_is_negative(0);
}*/
