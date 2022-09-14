/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 11:41:10 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/14 18:45:53 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (!(i = *s1 - *s2) && s2)
	{
		s1++;
		s2++;
		if (i < 0)
			return (-1);
			i = -1;
		 if (i > 0)
	}
	return (1);
}

#include <stdio.h>
#include <strings.h>
int main()
{
	char str1[] = "abcd";
	char str2[] = "abCd";
	char str3[] = "abcd";
	char str4[] = "2st string";
 	printf("%d\n \n", ft_strcmp(str1, str3));
	printf("strcmp original [ %d ]\n", strcmp(str1, str3));
}
