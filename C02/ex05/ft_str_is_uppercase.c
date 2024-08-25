/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:41:48 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/10 00:05:47 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 65 && str[i] <= 90))
		{
			return (0);
		}
	i++;
	}
	return (1);
}
/*
int main()
{
		char a[] = "1235456789";
		char b[] = "ajh12d5";
		char c[] = "AAAAAAA";
		char d[] = "125447AS8785";
		char e[] = "aaaaaaaa";
		printf("%s = [ %d ]\n",a, ft_str_is_uppercase(a));
		printf("%s = [ %d ]\n",b, ft_str_is_uppercase(b));
		printf("%s = [ %d ]\n", c, ft_str_is_uppercase(c));
		printf("%s = [ %d ]\n", d, ft_str_is_uppercase(d));
		printf("%s = [ %d ]\n", e, ft_str_is_uppercase(e));
}*/
