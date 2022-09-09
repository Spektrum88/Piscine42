/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 11:15:09 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/04 14:43:10 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printfirstline(int x);
void	printlastline(int x, int y);
void	printmiddle(int x, int y);

char	rush(int x, int y)
{
	printfirstline(x);
	write(1, "\n", 1);
	printmiddle(x, y);
	printlastline(x, y);
	write(1, "\n", 1);
	return (0);
}
