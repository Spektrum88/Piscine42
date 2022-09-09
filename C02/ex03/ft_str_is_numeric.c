/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 21:36:04 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/09 13:03:51 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (*str == ' ')
	{
		return (1);
	}
	while (str[i] != '\0' && i < *str)
	{
		if (str[i] >= 48 && str[i] <= 57)
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
			char b[] = "andreiii";
			char c[] = {};
			char d[] = "   ";
			
		printf("%s -> 1 true -> 0 false = [ %d ]\n", a, ft_str_is_numeric(a));
		printf("%s -> 1 true -> 0 false = [ %d ]\n", b, ft_str_is_numeric(b));
		printf("%s -> 1 true -> 0 false = [ %d ]\n", c, ft_str_is_numeric(c));
		printf("%s -> 1 true -> 0 false = [ %d ]\n", d, ft_str_is_numeric(d));
		printf("uppercase with numbers-> 1 true -> 0 false = [ %d ]\n", ft_str_is_numeric("ajh125"));
		printf("numbers with special char-> 1 true -> 0 false = [ %d ]\n", ft_str_is_numeric("125447AS8█85"));
		printf("special char-> 1 true -> 0 false = [ %d ]\n", ft_str_is_numeric("#$#@!!@#"));
		printf("uppers with special char-> 1 true -> 0 false = [ %d ]\n", ft_str_is_numeric("jha#$hakh"));
		printf("uppers with caps chars-> 1 true -> 0 false = [ %d ]\n", ft_str_is_numeric("ajhaDDDhakh"));
		printf("just caps chars-> 1 true -> 0 false = [ %d ]\n", ft_str_is_numeric("AAAAAA"));
}
