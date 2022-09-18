/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:18:44 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/18 17:51:10 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	i;	

	factorial = 1;
	i = 1;
	while (i <= nb)
	{
		factorial *= i;
		i++;
	}
	return (factorial);
}
/*#include <stdio.h>

int	main()
{	
	 int n;
	
	n = 14;
	printf("Factorial of -> [ %d ] is [ %d ]\n", n, ft_iterative_factorial(n));
	return (0);  	
}*/