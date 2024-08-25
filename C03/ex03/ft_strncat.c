/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:21:23 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/14 12:05:39 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	j++;
	while (src[i] != '\0' && i < nb)
	{	
		dest[j + i] = src[i];
	i++;
	}
	dest[j + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <strings.h>
int main()
{
	char src[50] = "__Copy__";
	char dest[50] = "";
	char src1[50] = "__Copy__";
	char dest2[50] = "";
	ft_strncat(dest, src, 5);
	printf("Final strint [ %s ]\n", dest);
	strncat(dest2, src1, 5);
	printf("STRNCAT [ %s ]\n", dest2);
	return (0);
}*/
