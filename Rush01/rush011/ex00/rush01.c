/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 19:55:15 by rrouille          #+#    #+#             */
/*   Updated: 2022/09/10 20:24:14 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_solve(int **board, int **specificity, int map_size);

void	ft_init_tab(int **specificity, int **board, int **box, int map_size)
{
	int	i;
	int	j;

	i = 0;
	while (i < map_size)
	{
		board[i] = malloc(sizeof(int) * map_size);
		box[i] = malloc(sizeof(int) * 3);
		j = 0;
		while (++j < map_size)
		{
			board[i][j] = 0;
			if (i < 3)
				box[i][j] = 0;
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		specificity[i] = malloc(sizeof(int) * map_size);
		i++;
	}
}

int	ft_initial_control(int argc, char **argv, int map_size, int **specificity)
{
	int	i;

	if (argc != 2)
		return (0);
	i = 0;
	while (argv[1][i])
	{
		if (i % 2 == 0)
		{
			if (argv[1][i] < '1' || argv[1][i] > (map_size + '0'))
				return (0);
			specificity[(i / 2) / map_size][(i / 2) % map_size] \
				= (argv[1][i] - '0');
		}
		else if (i % 2 == 1)
		{
			if (argv[1][i] != ' ')
				return (0);
		}
		i++;
	}
	if (i != map_size *(4 * 2) - 1)
		return (0);
	return (1);
}

int	ft_sum_control(int map_size, int **specificity)
{
	int	i;

	i = 0;
	while (i < map_size)
	{
		if ((specificity[0][i] + specificity[1][i]) > (map_size + 1))
			return (0);
		if ((specificity[2][i] + specificity[3][i]) > (map_size + 1))
			return (0);
		i++;
	}
	return (1);
}

void	ft_end_prog(int **specificity, int **board, int **box, int map_size)
{
	int	i;
	int	j;

	i = 0;
	while (i < map_size)
	{
		free(board[i]);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		free(specificity[i]);
		i++;
	}
	free(specificity);
	free(board);
}

int	main(int argc, char **argv)
{
	int	map_size;
	int	**specificity;
	int	**board;
	int	**box;
	int	i;
	int	j;

	i = 0;
	map_size = 4;
	specificity = malloc(sizeof(int *) * 4);
	board = malloc(sizeof(int *) * map_size);
	box = malloc(sizeof(int *) * map_size * map_size);
	ft_init_tab(specificity, board, box, map_size);
	if (!ft_initial_control(argc, argv, map_size, specificity) \
			|| !ft_sum_control(map_size, specificity))
	{
		write(1, "Error\n", 6);
		ft_end_prog(specificity, board, box, map_size);
		return (0);
	}
	ft_solve(board, specificity, map_size);
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			printf("%d ", board[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	ft_end_prog(specificity, board, box, map_size);
	return (0);
}
