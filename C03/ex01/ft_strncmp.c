/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:23:51 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/12 13:17:48 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while  (n-- && *s1  && (*s1 == *s2))
		{
			++s1;
			++s2;
		} 
	if ( n != 0)
	{
		return (0);
	}
return (*s1 -*s2);
}

int main()
{
	char str1[] = "1st string"; 
	char str2[] = "2st string"; 
	char str3[] = "1st string";
 	printf("%s\n %s\n %d ", ft_strncmp(str1, str2) 3);
}

