/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 19:04:09 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/11 13:38:09 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
/*int main()
{
		char a[] = "1235456789";
		char b[] = "ajh12d5";
		char c[] = "AAAAAAA";
		char d[] = "125447AS8785";
		char e[] = "AAAAAAA";
		printf("%s  = [ %d ]\n",a, ft_str_is_alpha(a));
		printf("%s -> [ %d ]\n",b, ft_str_is_alpha(b));
		printf("%s = [ %d ]\n", c, ft_str_is_alpha(c));
		printf("%s = [ %d ]\n", d, ft_str_is_alpha(d));
		printf("%s = [ %d ]\n", e, ft_str_is_alpha(e));
}*/
