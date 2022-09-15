/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 11:00:49 by rrouille          #+#    #+#             */
/*   Updated: 2022/09/11 11:33:39 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_case_min_max(int **board, int **specificity, int map_size);
void	ft_no_hidden_box(int **board, int **specificity, int map_size);
void	ft_three_complet(int **board, int **specificity, int map_size);
void	ft_three_complet2(int **board, int **specificity, int map_size, int i);
void	ft_case_min_max_a(int **board, int **specificity);
void	ft_case_min_max_b(int **board, int **specificity);
void	ft_case_min_max_c(int **board, int **specificity);
void	ft_case_min_max_d(int **board, int **specificity);
int		ft_search_missing(int **numbers, int n_ieme);
int		ft_missing_colomn(int **board, int map_size, int **numbers, int i);
int		ft_missing_line(int **board, int map_size, int **numbers, int i);
void	ft_decide_columns(int **board);
void	ft_decide_lines(int **board);
void	ft_special_case(int **board, int **specificity);
void	ft_place_one(int **board, int **specificity);
void	ft_special_three(int **board, int **specificity);
void	ft_special_one(int **board, int **specificity);
void	ft_magic_for(int **board, int **specificity);
void	ft_magic_two(int **board, int **specificity);

void	ft_complett_line(int **board, int **specificity, int map_size)
{
	int	i;
	int	j;
	int	nb_zero;
	int	**numbers;

	numbers = malloc(sizeof(int *) * 2);
	numbers[0] = malloc(sizeof(int) * 4);
	numbers[1] = malloc(sizeof(int) * 4);
	i = -1;
	while (++i < map_size)
	{
		j = 0;
		while (j < 4)
		{
			numbers[0][j] = j + 1;
			numbers[1][j] = -1;
			j++;
		}
		nb_zero = ft_missing_line(board, map_size, numbers, i);
		if (nb_zero == 1)
		{
			board[i][numbers[1][0]] = ft_search_missing(numbers, 1);
		}
		else if (nb_zero == 2)
		{
			if ((board[i][0] == 0) && (board[i][1] == 0) && (board[i][2] == 4))
			{
				if (specificity[2][i] == 3)
				{
					board[i][0] = ft_search_missing(numbers, 1);
					board[i][1] = ft_search_missing(numbers, 2);
				}
				else if (specificity[2][i] == 2)
				{
					board[i][0] = ft_search_missing(numbers, 2);
					board[i][1] = ft_search_missing(numbers, 1);
				}
			}
			if ((board[i][3] == 0) && (board[i][2] == 0) && (board[i][1] == 4))
			{
				if (specificity[3][i] == 3)
				{
					board[i][3] = ft_search_missing(numbers, 1);
					board[i][2] = ft_search_missing(numbers, 2);
				}
				else if (specificity[3][i] == 2)
				{
					board[i][3] = ft_search_missing(numbers, 2);
					board[i][2] = ft_search_missing(numbers, 1);
				}
			}
			if ((board[i][0] == 0) && (board[i][1] == 0) &&
					(board[i][2] == 4) && (board[i][3] == 3))
			{
				board[i][1] = 1;
				board[i][0] = 2;
			}
			if ((board[i][0] == 3) && (board[i][1] == 4) &&
					(board[i][2] == 0) && (board[i][3] == 0))
			{
				board[i][2] = 1;
				board[i][3] = 2;
			}
			if ((board[i][0] == 0) && (board[i][1] == 0) &&
					(board[i][2] == 3) && (board[i][3] == 4))
			{
				board[i][1] = 1;
				board[i][0] = 2;
			}
			if ((board[i][0] == 4) && (board[i][1] == 3) &&
					(board[i][2] == 0) && (board[i][3] == 0))
			{
				board[i][2] = 1;
				board[i][3] = 2;
			}
			if ((board[i][0] == 0) && (board[i][1] == 0) &&
					(board[i][2] == 2) && (board[i][3] == 4))
			{
				if (specificity[2][i] == 3)
				{
					board[i][1] = 3;
					board[i][0] = 1;
				}
			}
			if ((board[i][0] == 4) && (board[i][1] == 2) &&
					(board[i][2] == 0) && (board[i][3] == 0))
			{
				if (specificity[3][i] == 3)
				{
					board[i][2] = 3;
					board[i][3] = 1;
				}
			}
			if ((board[i][0] == 0) && (board[i][1] == 4) &&
					(board[i][2] == 2) && (board[i][3] == 0))
			{
				if (specificity[3][i] == 3)
				{
					board[i][0] = 3;
					board[i][3] = 1;
				}
				if (specificity[3][i] == 2)
				{
					board[i][0] = 1;
					board[i][3] = 3;
				}
			}
			if ((board[i][0] == 0) && (board[i][1] == 2) &&
					(board[i][2] == 4) && (board[i][3] == 0))
			{
				if (specificity[2][i] == 3)
				{
					board[i][0] = 1;
					board[i][3] = 3;
				}
				if (specificity[2][i] == 2)
				{
					board[i][0] = 3;
					board[i][3] = 1;
				}
			}
			if ((board[i][0] == 4) && (board[i][1] == 0) &&
					(board[i][2] == 1) && (board[i][3] == 0))
			{
				if (specificity[3][i] == 3)
				{
					board[i][1] = 3;
					board[i][3] = 2;
				}
			}
			if ((board[i][0] == 0) && (board[i][1] == 1) &&
					(board[i][2] == 0) && (board[i][3] == 4))
			{
				if (specificity[2][i] == 3)
				{
					board[i][0] = 2;
					board[i][2] = 3;
				}
			}
			if ((board[i][0] == 4) && (board[i][1] == 1) &&
					(board[i][2] == 0) && (board[i][3] == 0))
			{
				board[i][2] = 2;
				board[i][3] = 3;
			}
			if ((board[i][0] == 0) && (board[i][1] == 0) &&
					(board[i][2] == 1) && (board[i][3] == 4))
			{
				board[i][0] = 3;
				board[i][1] = 2;
			}
		}
	}
	free(numbers[0]);
	free(numbers[1]);
	free(numbers);
}

void	ft_complett_column(int **board, int **specificity, int map_size)
{
	int	i;
	int	j;
	int	nb_zero;
	int	**numbers;

	numbers = malloc(sizeof(int *) * 2);
	numbers[0] = malloc(sizeof(int) * 4);
	numbers[1] = malloc(sizeof(int) * 4);
	i = -1;
	while (++i < map_size)
	{
		j = 0;
		while (j < 4)
		{
			numbers[0][j] = j + 1;
			numbers[1][j] = -1;
			j++;
		}
		nb_zero = ft_missing_colomn(board, map_size, numbers, i);
		if (nb_zero == 1)
		{
			board[numbers[1][0]][i] = ft_search_missing(numbers, 1);
		}
		else if (nb_zero == 2)
		{
			if ((board[0][i] == 0) && (board[1][i] == 0) && (board[2][i] == 4))
			{
				if (specificity[0][i] == 3)
				{
					board[0][i] = ft_search_missing(numbers, 1);
					board[1][i] = ft_search_missing(numbers, 2);
				}
				else if (specificity[0][i] == 2)
				{
					board[0][i] = ft_search_missing(numbers, 2);
					board[1][i] = ft_search_missing(numbers, 1);
				}
			}
			if ((board[3][i] == 0) && (board[2][i] == 0) && (board[1][i] == 4))
			{
				if (specificity[1][i] == 3)
				{
					board[3][i] = ft_search_missing(numbers, 1);
					board[2][i] = ft_search_missing(numbers, 2);
				}
				else if (specificity[1][i] == 2)
				{
					board[3][i] = ft_search_missing(numbers, 2);
					board[2][i] = ft_search_missing(numbers, 1);
				}
			}
			if ((board[0][i] == 0) && (board[1][i] == 0) &&
					(board[2][i] == 4) && (board[3][i] == 3))
			{
				board[1][i] = 1;
				board[0][i] = 2;
			}
			if ((board[0][i] == 3) && (board[1][i] == 4) &&
					(board[2][i] == 0) && (board[3][i] == 0))
			{
				board[2][i] = 1;
				board[3][i] = 2;
			}
			if ((board[0][i] == 0) && (board[1][i] == 0) &&
					(board[2][i] == 3) && (board[3][i] == 4))
			{
				board[1][i] = 1;
				board[0][i] = 2;
			}
			if ((board[0][i] == 4) && (board[1][i] == 3) &&
					(board[2][i] == 0) && (board[3][i] == 0))
			{
				board[2][i] = 1;
				board[3][i] = 2;
			}
			if ((board[0][i] == 0) && (board[1][i] == 0) &&
					(board[2][i] == 2) && (board[3][i] == 4))
			{
				if (specificity[0][i] == 3)
				{
					board[1][i] = 3;
					board[0][i] = 1;
				}
			}
			if ((board[0][i] == 4) && (board[1][i] == 2) &&
					(board[2][i] == 0) && (board[3][i] == 0))
			{
				if (specificity[1][i] == 3)
				{
					board[2][i] = 3;
					board[3][i] = 1;
				}
			}
			if ((board[0][i] == 0) && (board[1][i] == 4) &
					(board[2][i] == 2) && (board[3][i] == 0))
			{
				if (specificity[1][i] == 3)
				{
					board[0][i] = 3;
					board[3][i] = 1;
				}
				if (specificity[1][i] == 2)
				{
					board[0][i] = 1;
					board[3][i] = 3;
				}
			}
			if ((board[0][i] == 0) && (board[1][i] == 2) &&
					(board[2][i] == 4) && (board[3][i] == 0))
			{
				if (specificity[0][i] == 3)
				{
					board[0][i] = 1;
					board[3][i] = 3;
				}
				if (specificity[0][i] == 2)
				{
					board[0][i] = 3;
					board[3][i] = 1;
				}
			}
			if ((board[0][i] == 4) && (board[1][i] == 0) &&
					(board[2][i] == 1) && (board[3][i] == 0))
			{
				if (specificity[1][i] == 3)
				{
					board[1][i] = 3;
					board[3][i] = 2;
				}
			}
			if ((board[0][i] == 0) && (board[1][i] == 1) &&
					(board[2][i] == 0) && (board[3][i] == 4))
			{
				if (specificity[0][i] == 3)
				{
					board[0][i] = 2;
					board[2][i] = 3;
				}
			}
			if ((board[0][i] == 4) && (board[1][i] == 1) &&
					(board[2][i] == 0) && (board[3][i] == 0))
			{
				board[2][i] = 2;
				board[3][i] = 3;
			}
			if ((board[0][i] == 0) && (board[1][i] == 0) &&
					(board[2][i] == 1) && (board[3][i] == 4))
			{
				board[0][i] = 3;
				board[1][i] = 2;
			}
		}
	}
	free(numbers[0]);
	free(numbers[1]);
	free(numbers);
}

int	ft_count(int **board, int search)
{
	int	nb_search;
	int	i;
	int	j;

	nb_search = 0;
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (board[i][j] == search)
			{
				nb_search ++;
			}
			j++;
		}
		i++;
	}
	return (nb_search);
}

void	ft_last(int **board, int search)
{
	int	find;
	int	i;
	int	j;
	int	line;

	i = 0;
	find = 1;
	while (i < 4 && find)
	{
		find = 0;
		j = 0;
		while (j < 4 && !find)
		{
			if (board[i][j] == search)
				find = 1;
			j++;
		}
		if (!find)
			line = i;
		i++;
	}
	if (find == 0)
	{
		find = 1;
		i = 0;
		while (i < 4 && find)
		{
			find = 0;
			j = 0;
			while (j < 4 && !find)
			{
				if (board[j][i] == search)
				{
					find = 1;
				}
				j++;
			}
			if (!find)
			{
				board[line][i] = search;
			}
			i++;
		}
	}
}

void	ft_solve(int **board, int **specificity, int map_size)
{
	int	i;
	int	a;
	int	j;

	j = 0;
	ft_case_min_max(board, specificity, map_size);
	ft_no_hidden_box(board, specificity, map_size);
	if (ft_count(board, 4) == 3)
		ft_last(board, 4);
	ft_place_one(board, specificity);
	ft_special_three(board, specificity);
	ft_special_one(board, specificity);
	ft_magic_for(board, specificity);
	ft_magic_two(board, specificity);
	ft_three_complet(board, specificity, map_size);
	while (j < 3)
	{
		i = 4;
		ft_three_complet(board, specificity, map_size);
		ft_special_case(board, specificity);
		ft_complett_line(board, specificity, map_size);
		ft_complett_column(board, specificity, map_size);
		while (i > 0)
		{
			if (ft_count(board, i) == 3)
			{
				ft_last(board, i);
			}
			i--;
		}
		if (ft_count(board, 0) == 4)
		{
			ft_decide_columns(board);
			ft_decide_lines(board);
		}
		j++;
	}
	
	printf("\n\n");
}
