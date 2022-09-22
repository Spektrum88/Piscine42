/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:18:44 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/20 16:18:23 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	i;	

	factorial = 1;
	i = 1;
	if (nb >= 0)
	{	
		while (i <= nb)
		{
			factorial *= i;
			i++;
		}
		return (factorial);
	}
	return (0);
	
}

/*#include <stdio.h>

int	main()
{	
	 int n;
	
	n = 12;
	printf("Factorial of -> [ %d ] is [ %d ]\n", n, ft_iterative_factorial(n));
	return (0);  	
}*/