/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 21:42:56 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/09 21:29:01 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] <= 122))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
int main()
{
				char a[] = "1235456789";
				char b[] = "andreiii";
				char c[] = {};
		printf("just numbers -> 1 true -> 0 false = [ %d ]\n", ft_str_is_lowercase(a));
		printf("lower case` -> 1 true -> 0 false = [ %d ]\n", ft_str_is_lowercase(b));
		printf("Empty line -> 1 true -> 0 false = [ %d ]\n", ft_str_is_lowercase(c));
		printf("uppercase with numbers-> 1 true -> 0 false = [ %d ]\n", ft_str_is_lowercase("ajh125"));
		printf("numbers with caps-> 1 true -> 0 false = [ %d ]\n", ft_str_is_lowercase("125447AS8785"));
		printf("special char-> 1 true -> 0 false = [ %d ]\n", ft_str_is_lowercase("#$#@!!@#"));
		printf("uppers with special char-> 1 true -> 0 false = [ %d ]\n", ft_str_is_lowercase("jha#$hakh"));
		printf("uppers with caps chars-> 1 true -> 0 false = [ %d ]\n", ft_str_is_lowercase("ajhaDDDhakh"));
		printf("just caps chars-> 1 true -> 0 false = [ %d ]\n", ft_str_is_lowercase("AAAAAA"));
	}
