/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exam.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:09:31 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/09 14:19:32 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_rev(void)
{
	char alpha;
	
	alpha = 'z';
	while ( alpha >= 'a')
	{
		write(1, &alpha, 1);
		alpha--;
	}
}
int main()
{

	print_rev();
	return (0);
}

