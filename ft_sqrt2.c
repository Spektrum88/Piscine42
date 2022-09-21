/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 19:22:49 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/20 20:59:42 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int num;
	long int sqrt;
	
	
	sqrt = nb / 2;
	num = (sqrt + nb / sqrt) / 2 ;
	while (num < sqrt) 
	{	
		sqrt = num;
		num = ((sqrt + nb / sqrt) / 2);
	}
	return(num);
}

#include <stdio.h>

int	main()
{
	int n;
	
	n = 25;
	printf("Sqrt of -> [ %d ] is [ %d ]\n", n, ft_sqrt(n));
	return (0);
}
