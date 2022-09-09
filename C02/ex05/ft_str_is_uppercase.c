/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:41:48 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/09 13:07:15 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (*str == ' ')
	{
		return (1);
	}
	while (str[i] != '\0' && i < *str)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}
/*int main()
{
				char a[] = "1235456789";
				char b[] = "andreiii";
				char c[] = {};
				char d[] = "    ";
		printf("just numbers -> 1 true -> 0 false = [ %d ]\n", ft_str_is_uppercase(a));
		printf("only lower case -> 1 true -> 0 false = [ %d ]\n", ft_str_is_uppercase(b));
		printf("empty  -> 1 true -> 0 false = [ %d ]\n", ft_str_is_uppercase(c));
		printf("spaces -> 1 true -> 0 false = [ %d ]\n", ft_str_is_uppercase(d));
		printf("uppercase with numbers-> 1 true -> 0 false = [ %d ]\n", ft_str_is_uppercase("ajh125"));
		printf("numbers with caps-> 1 true -> 0 false = [ %d ]\n", ft_str_is_uppercase("125447AS8785"));
		printf("special char-> 1 true -> 0 false = [ %d ]\n", ft_str_is_uppercase("#$#@!!@#"));
		printf("uppers with special char-> 1 true -> 0 false = [ %d ]\n", ft_str_is_uppercase("jha#$hakh"));
		printf("uppers with caps chars-> 1 true -> 0 false = [ %d ]\n", ft_str_is_uppercase("ajhaDDDhakh"));
		printf("just caps chars-> 1 true -> 0 false = [ %d ]\n", ft_str_is_uppercase("AAAAAA"));
	}*/
