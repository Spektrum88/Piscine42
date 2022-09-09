/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 12:42:17 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/09 12:18:42 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

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
/*int main ()
{

		char str1[] = {};
		char str2[] = "2string";
		char str3[] = "3string";
		ft_strcpy(str3, str1);
		printf("%s // %s\n", str2, str3);
		ft_strcpy(str1, str2);
		printf("%s // \n", str1);
		return 0;
	}*/
