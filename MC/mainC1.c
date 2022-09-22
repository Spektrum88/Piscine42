/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainC1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 11:16:48 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/15 15:35:31 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
//C01___________

void	ft_ft(int *nbr); // -> ex00
void ft_ultimate_ft(int *********nbr); // -> ex01
void	ft_swap(int *a, int *b); // -> ex02
void	ft_div_mod(int a, int b, int *div, int *mod); // -> ex03



int main(void)
{
//ex00
	{
		int a;
	
		ft_ft(&a);
		printf("%d", a);
		return(0);
	}
//ex01
	{
		int a;
		int *nbr8;
		int **nbr7;
		int ***nbr6;
		int ****nbr5;
		int *****nbr4;
		int ******nbr3;
		int *******nbr2;
		int ********nbr1;
		int *********nbr;

		a = 5;
		printf("Value of variable after = %d\n", a);

		nbr8 = &a;
		nbr7 = &nbr8;
		nbr6 = &nbr7;
		nbr5 = &nbr6;
		nbr4 = &nbr5;
		nbr3 = &nbr4;
		nbr2 = &nbr3;
		nbr1 = &nbr2;
		nbr = &nbr1;

		ft_ultimate_ft(nbr);
		printf("Value of the pointer = %d\n", a);
		return (0);
	}
//ex02
	
	{
		int c;
		int d;

		c = 42;
		d = 55;

		printf("\nNumbers before swap\n");
		printf("Number 1 = %d\n", c);
		printf("Number 2 = %d\n", d);

		printf("\nNumbers After swap\n");
		ft_swap(&c, &d);
		printf("Value of Swap 1 = %d\n", c);
		printf("Value of Swap 2 = %d\n", d);
		return(0);
	}
//ex03
	{
		int	c = 12;
		int	d = 2;
		int a = 0;
		int b = 0;

		printf("Numbers 1 = %d\n", c);
		printf("Numbers 2 = %d\n", d);
		ft_div_mod(c, d, &a, &b);
		printf("Division of  %d / %d = %d\n",c, d, a);
		printf("Rest of Division %d / %d = %d\n",c, d, b);
		return(0);
	}
	
	{
		int	c = 12;
		int	d = 2;
		printf("\n %d / %d ",c, d);
		ft_ultimate_div_mod(&c, &d);
		printf("= %d ",c);
		printf("and the rest of division is = %d\n\n", d);
		return(0);
	}
//ex05
	{
		void replace_1letter(char *str) // replace first letter.
	{	
			str[0] = 'T';
	}

		void replace_first_char ( char *src, char *desc) // replace a string inside
	{
		desc[6] = src[5];
	}

	{
		char str1[] = "My string";
		char str2[] = "Number2";
		ft_putstr(str1);
		ft_putchar('\n');
		ft_putstr(str2);
		ft_putchar('\n');
		replace_first_char(str1, str2);
		ft_putchar('\n');
		replace_1letter(str1);
		ft_putstr(str1);
		ft_putchar('\n');
		ft_putstr(str2);
		return(0);
	}
//ex06
	{
		char *str1 = "My strig";
		char *str2 = "12345678";

		printf("[ %s ] got [ %d ] characteres\n", str1, ft_strlen(str1));
		printf("[ %s ] got [ %d ] characteres\n", str2, ft_strlen(str2));
	}
}
