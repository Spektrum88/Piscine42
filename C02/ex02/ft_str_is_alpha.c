/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 19:04:09 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/09 12:37:04 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (*str == ' ')
	{
		return (1);
	}	
	while (str[i] != '\0' && i < *str)
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
		{	
			i++;
		}
		else
			return (0);
	}
	return (1);
}
int main()
	{
		char a[] = "1235456789";
		char b[] = "     ";
		printf("just numbers -> 1 true -> 0 false = [ %d ]\n", ft_str_is_alpha(a));
		printf("Empty line -> 1 true -> 0 false = [ %d ]\n", ft_str_is_alpha(b));
		printf("uppercase with numbers-> 1 true -> 0 false = [ %d ]\n", ft_str_is_alpha("ajh125"));
		printf("numbers with caps-> 1 true -> 0 false = [ %d ]\n", ft_str_is_alpha("125447AS8785"));
		printf("special char-> 1 true -> 0 false = [ %d ]\n", ft_str_is_alpha("#$#@!!@#"));
		printf("uppers with special char-> 1 true -> 0 false = [ %d ]\n", ft_str_is_alpha("jha#$hakh"));
		printf("uppers with caps chars-> 1 true -> 0 false = [ %d ]\n", ft_str_is_alpha("ajhaDDDhakh"));
		printf("just caps chars-> 1 true -> 0 false = [ %d ]\n", ft_str_is_alpha("AAAAAA"));
	}
