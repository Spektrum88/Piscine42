/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:34:10 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/21 21:09:56 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(*str++ )
		i++;
	return (i);
}
char *ft_strdup(char *src)
{
	char *xD;

	int	i;

	i = 0;
	if (!(xD = (char*)malloc(sizeof(char) * ft_strlen(src) + 1 )))
		return NULL;
	while (*src)
	{
		xD[i++] = *src++;
	}
	xD[i] = 0x00;
	return (xD);
}

#include <stdio.h>

int main(int ac,char **av )
{
	char *m;
	char *t;
	if (ac == 2)
	{
		m = ft_strdup(av[1]);
		t = strdup(av[1]);
		printf(":%s:\n:%s:\n", m, t); 
	}
	return (0);
}
