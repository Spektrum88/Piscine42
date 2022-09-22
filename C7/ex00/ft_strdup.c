/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:34:10 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/22 19:06:04 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*p;
	int		i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	p = (char *)malloc(sizeof(char) * (i + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	i = -1;
	while (src[++i])
	{
		p[i] = src[i];
	}
	p[i] = 0x00;
	return (p);
}

/*#include <stdio.h>
#include <string.h>
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
}*/
