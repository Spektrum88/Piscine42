/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comparatio.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 11:58:56 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/05 12:39:52 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int a;
	int b;
	char c;
	char d;
	char e;
	char f;

	a = 42;
	b = 42;
	c = 'A';
	d = 'a';
	e = 65;
	f = 65;
	
	printf("comparando numeros = %d == %d %d\n", a, b, a == b);
	printf("comprarando carateresi %c == %c %d\n", c, d, c == d);
	printf("comparando carateres ascii %c == %c %d\n", e, f, e == f);
	printf("nao iigaul a 0 !(%d <= %d) %d\n", a, b, !!(a <= b));
	printf(" %d && %d %d\n", a, b, a && b);
	printf("comparando numeros = %d && %d %d\n", a, b, a && b);
	printf("comparando numeros = %d || %d %d\n", a, b, a || b);
	printf("%d\n", (a ==  b) && (a != b));
}

