/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 20:35:41 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/15 21:05:56 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putstr(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != 0x00 )
		i++;
		write(1, str, i);
}
int main(void)
{
	putstr("andreeeee\n");
	return (0);
}
