/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   positivos.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:28:32 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/20 20:58:27 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void cond(int n)
{

	if(n >  0)
		write(1, "positif" , 7);	
	else if (n == 0)
		write(1,"neutro", 6);
	else
		write(1,"negatif", 10);


}
int main()
{
	cond(5);
	return(0);
}
