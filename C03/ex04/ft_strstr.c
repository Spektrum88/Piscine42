/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:34:02 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/13 17:13:32 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	tmp;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			tmp = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					tmp = 1;
				i++;
			}
			if (tmp == 0)
				return (str);
		}
		str++;
	}
	return (0);
}

/*#include <stdio.h>
int main()
{
	char a[] = "Lorem Ipsum is simply dummy text of 
the printing and typesetting industry.";
	char b[] = "text";
	char c[] = "nothing";
	printf("\nOriginal test -> [ %s ]\n\nChars to 
shearch [ %s ]\n\nString found -> [ %s ]\n", a, b, ft_strstr(a, b));
	printf("\nOriginal test -> [ %s ]\n\nChars to 
shearch [ %s ]\n\nString found -> [ %s ]\n", a, c, ft_strstr(a, c));

}*/
