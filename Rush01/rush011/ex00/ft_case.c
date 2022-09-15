/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 22:05:47 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/11 22:05:49 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_missing_colomn(int **board, int **numbers, int i);
int	ft_missing_line(int **board, int **numbers, int i);
int	ft_search_missing(int **numbers, int n_ieme);
void	ft_case_min_max_b(int **board, int **specificity, int i, int j);
void	ft_case_min_max_c(int **board, int **specificity, int i, int j);
void	ft_magic_for(int **board, int **specificity);

void	ft_case_min_max_a(int **board, int **specificity, int i, int j)
{
	if (specificity[2][i] == 1)
	{
		board[i][0] = 4;
		if (specificity[3][i] == 2)
			board[i][3] = 3;
	}
	if (specificity[3][i] == 1)
	{
		board[i][3] = 4;
		if (specificity[2][i] == 2)
			board[i][0] = 3;
	}
	ft_case_min_max_b(board, specificity, i, j);
}

void	ft_case_min_max_b(int **board, int **specificity, int i, int j)
{
	if (specificity[0][i] == 4)
	{
		j = -1;
		while (j++ < 4)
			board[j][i] = j + 1;
	}
	if (specificity[1][i] == 4)
	{
		j = -1;
		while (++j < 4)
			board[( 4 - 1) - j][i] = j + 1;
	}
	ft_case_min_max_c (board, specificity, i, j);
}

void	ft_case_min_max_c(int **board, int **specificity, int i, int j)
{
	if (specificity[2][i] == 4)
	{
		j = -1;
		while (++j < 4)
			board[i][j] = j + 1;
	}
	if (specificity[3][i] == 4)
	{
		j = -1;
		while (++j < 4)
			board[i][( 4 - 1) - j] = j + 1;
	}
	i++;
}

void	ft_case_min_max(int **board, int **specificity)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		if (specificity[0][i] == 1)
		{
			board[0][i] = 4;
			if (specificity[1][i] == 2)
				board[3][i] = 3;
		}
		if (specificity[1][i] == 1)
		{
			board[3][i] = 4;
			if (specificity[0][i] == 2)
				board[0][i] = 3;
		}
		ft_case_min_max_a(board, specificity, i, j);
	}
}

void	ft_decide_columns(int **board, int i)
{
	int	**numbers;
	int	**numbers2;
	int	j;
	int	line1;

	numbers = malloc(sizeof(int *) * 2);
	numbers[0] = malloc(sizeof(int) * 4);
	numbers[1] = malloc(sizeof(int) * 4);
	numbers2 = malloc(sizeof(int *) * 2);
	numbers2[0] = malloc(sizeof(int) * 4);
	numbers2[1] = malloc(sizeof(int) * 4);
	i = -1;
	while (++i < 4)
	{
		j = 0;
		while (j < 4)
		{
			numbers[0][j] = j + 1;
			numbers[1][j] = -1;
			j++;
		}
		if (ft_missing_colomn(board, numbers, i) == 2)
			break ;
	}
	line1 = i;
	while (++i < 4)
	{
		j = 0;
		while (j < 4)
		{
			numbers2[0][j] = j + 1;
			numbers2[1][j] = -1;
			j++;
		}
		if (ft_missing_colomn(board, numbers2, i) == 2)
			break ;
	}
	if (line1 != i)
	{
		if ((numbers[1][0] == numbers2[1][0])
		&& (numbers[1][1] == numbers2[1][1]))
		{
			if ((ft_search_missing(numbers, 1)
					== ft_search_missing(numbers2, 1))
				&& (ft_search_missing(numbers, 2)
					== ft_search_missing(numbers2, 2)))
				board[numbers[1][0]][line1] = ft_search_missing(numbers, 1);
		}
	}
}

void	ft_decide_lines(int **board, int i)
{
	int	**numbers;
	int	**numbers2;
	int	j;
	int	line1;

	numbers = malloc(sizeof(int *) * 2);
	numbers[0] = malloc(sizeof(int) * 4);
	numbers[1] = malloc(sizeof(int) * 4);
	numbers2 = malloc(sizeof(int *) * 2);
	numbers2[0] = malloc(sizeof(int) * 4);
	numbers2[1] = malloc(sizeof(int) * 4);
	i = -1;
	while (++i < 4)
	{
		j = 0;
		while (j < 4)
		{
			numbers[0][j] = j + 1;
			numbers[1][j] = -1;
			j++;
		}
		if (ft_missing_line(board, numbers, i) == 2)
			break ;
	}
	line1 = i;
	while (++i < 4)
	{
		j = 0;
		while (j < 4)
		{
			numbers2[0][j] = j + 1;
			numbers2[1][j] = -1;
			j++;
		}
		if (ft_missing_line(board, numbers2, i) == 2)
			break ;
	}
	if (line1 != i)
	{
		if ((numbers[1][0] == numbers2[1][0])
			&& (numbers[1][1] == numbers2[1][1]))
		{
			if ((ft_search_missing(numbers, 1)
					== ft_search_missing(numbers2, 1))
				&& (ft_search_missing(numbers, 2)
					== ft_search_missing(numbers2, 2)))
				board[line1][numbers[1][0]] = ft_search_missing(numbers, 1);
		}
	}
}