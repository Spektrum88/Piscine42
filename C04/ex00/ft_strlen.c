/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:08:03 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/13 17:26:37 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	i++;
	return (i);
}
/*
#include <stdio.h>
int main()
{
	char *str = "12345";
	printf("[ %s ] have a length of [ %d ]", str, ft_strlen(str));
}
*/
