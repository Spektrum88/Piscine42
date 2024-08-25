/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 18:54:14 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/07 12:33:48 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{	
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*int main()
{
	int c;
	int d;

	c = 42;
	d = 55;

	printf("\nNumbers before swap\n");
	printf("Number 1 = %d\n", c);
	printf("Number 2 = %d\n", d);

	printf("\nNumbers After swap\n");
	ft_swap(&c, &d);
	printf("Value of Swap 1 = %d\n", c);
	printf("Value of Swap 2 = %d\n", d);
	return(0);
}*/
