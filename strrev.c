/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 20:14:30 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/15 20:32:47 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char *ft_strrev(char *str)
{	
	int size;
	int	i;
	char c;
	
	i = 0;
	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	size--;
	while ( size > i)
	{	
		c = str[size];
		str[size] = str[i];
		str[i] = c;
		i++;
		size--;
	}
	return(str);

}
int main()
{
  	char a[] = "andre Soares";
  	char b[] = "seraoS erdna";
	printf("%s", ft_strrev(a));
	printf("\n");
	printf("%s\n", ft_strrev(b));
	return (0);
}
