/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 15:15:03 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/01 16:53:33 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alpha_rev;

	alpha_rev = 'z';
	while (alpha_rev >= 'a')
	{
		write(1, &alpha_rev, 1);
		alpha_rev--;
	}
}
/*int	main(){
	ft_print_reverse_alphabet();
}*/
