/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 21:41:44 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/05 22:06:32 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int main()
{
	int	c = 12;
	int	d = 2;
	int a = 0;
	int b = 0;
 	
	printf("Numbers 1 = %d\n", c);
	printf("Numbers 2 = %d\n", d);
	ft_div_mod(c, d, &a, &b);
	printf("Division of  %d / %d = %d\n",c, d, a);
	printf("Rest of Division %d / %d = %d\n",c, d, b);
	return(0);
}*/
