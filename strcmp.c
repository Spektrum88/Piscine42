/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 23:17:13 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/08 23:28:36 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// Function to implement strcmp function
int strcmp(char *X, char *Y)
{	unsigned *X;
	while (*X)
	{
		// if characters differ, or end of the second string is reached
		if (*X != *Y) {
			break;
		}

		// move to the next pair of characters
		X++;
		Y++;
	}

	// return the ASCII difference after converting `char*` to `unsigned char*`
	return (*X - *Y);
}

// Implement `strcmp()` function in C
int main()
{
	char *X = "Techie";
	char *Y = "Tech";

	int ret = strcmp(X, Y);

	if (ret > 0) {
		printf("%s", "X is greater than Y");
	}
	else if (ret < 0) {
		printf("%s", "X is less than Y");
	}
	else {
		printf("%s", "X is equal to Y");
	}

	return 0;
}
