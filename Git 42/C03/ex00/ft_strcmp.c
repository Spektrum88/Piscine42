/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 11:41:10 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/15 12:14:15 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
	{
			i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>
#include <strings.h>
int main()
{
	char str1[] = "\201";
	char str2[] = "A";
	//char str3[] = "2st string";
	//char str4[] = "2st string";
 	printf("%d\n \n", ft_strcmp(str2, str1));
	printf("strcmp original [ %d ]\n", strcmp(str2, str1));
}*/
