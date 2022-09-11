/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 15:47:04 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/11 16:19:32 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
/*
int main()
{	
		char a[] = "1235456789";
		char b[] = "ajh12d5";
		char c[] = "AAAAAAA";
		char d[] = "125447AS8785";
		char e[] = "aaaaaaaa";
		printf("%s  = [ %d ]\n",a, ft_str_is_lowercase(a));
		printf("%s -> [ %d ]\n",b, ft_str_is_lowercase(b));
		printf("%s = [ %d ]\n", c, ft_str_is_lowercase(c));
		printf("%s = [ %d ]\n", d, ft_str_is_lowercase(d));
		printf("%s = [ %d ]\n", e, ft_str_is_lowercase(e));
}*/
