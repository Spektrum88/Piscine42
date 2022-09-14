/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 12:42:17 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/13 13:41:49 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;	

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>
int main ()
{

		char dest[] = {};
		char src1[] = "2string";
		char sr2[] = "3string";
		printf(":%s:\n", dest); 
		ft_strcpy(src1, dest);
		printf(":%s:\n", dest);
		printf(":%s: copy src2 to dest\n", dest);
		ft_strcpy(src2, dest);
		printf(":%s: \n", dest);
		return 0;
	}*/
