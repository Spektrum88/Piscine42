/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:41:34 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/08 22:44:02 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{	
		if (i == 0)
		{
			if (str[i] >= 65 && str[i] <= 90)
			{
				str[i+1] = str[i] - 32;;
				i++;	
			}

		}
		else if (str[i]== ' ' )
		{	
			if (str[i+1] >= 65 && str[i] <= 90)
			i +=1;
		}
	else 
	{
		if(str[i]>='A' && str[i]<='Z')
				str[i]=str[i]+32;
	}
	i++; 
	}
	return (str);
}
