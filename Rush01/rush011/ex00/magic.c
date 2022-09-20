/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   magic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 23:31:52 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/11 23:32:01 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_magic_for(int **board, int **specificity)
{
	if ((board[0][3] == 4) && (board[2][1] == 4) &&
	(specificity[0][1] == 2) && (specificity[2][0] == 3))
		board[0][1] = 3;
	if ((board[3][0] == 4) && (board[1][2] == 4) &&
	(specificity[1][2] == 2) && (specificity[3][3] == 3))
		board[3][2] = 3;
	if ((board[0][0] == 4) && (board[2][2] == 4) &&
	(specificity[2][2] == 2) && (specificity[1][0] == 3))
		board[2][0] = 3;
	if ((board[1][1] == 4) && (board[3][3] == 4) &&
	(specificity[3][1] == 2) && (specificity[0][3] == 3))
		board[1][3] = 3;
	ft_magic_for2(board, specificity);
}

void	ft_magic_for2(int **board, int **specificity)
{
	if ((board[0][3] == 4) && (board[2][1] == 4) &&
	(specificity[3][2] == 2) && (specificity[1][3] == 3))
		board[2][3] = 3;
	if ((board[3][0] == 4) && (board[1][2] == 4) &&
	(specificity[2][1] == 2) && (specificity[0][0] == 3))
		board[1][0] = 3;
	if ((board[0][0] == 4) && (board[2][2] == 4) &&
	(specificity[0][2] == 2) && (specificity[3][0] == 3))
		board[0][2] = 3;
	if ((board[1][1] == 4) && (board[3][3] == 4) &&
	(specificity[1][1] == 2) && (specificity[2][3] == 3))
		board[3][1] = 3;
}

void	ft_magic_two2(int **board, int **specificity);
{
	if ((board[1][1] == 4) && (board[2][2] == 4 &&
	(board[0][2] == 3) && specificity[1][1] == 3))
		board[2][1] = 2;
	if ((board[1][1] == 4) && (board[2][2] == 4 &&
	(board[1][3] == 3) && specificity[0][2] == 3))
		board[1][2] = 2;
	ft_magic_two3(board, specificity);
}

void	ft_magic_two3(int **board, int **specificity);
{
	if ((board[1][2] == 4) && (board[2][1] == 4 &&
	(board[0][1] == 3) && specificity[0][1] == 3))
	board[1][1] = 2;
	ft_magic_two4(board, specificity);
}

void	ft_magic_two4(int **board, int **specificity);
{
	if ((board[1][2] == 4) && (board[2][1] == 4 &&
	(board[2][3] == 3) && specificity[1][2] == 3))
		board[1][1] = 2;
	if ((board[1][1] == 4) && (board[2][2] == 4 &&
	(board[3][1] == 3) && specificity[2][2] == 3))
		board[2][1] = 2;
	if ((board[1][1] == 4) && (board[2][2] == 4 &&
	(board[0][2] == 3) && specificity[3][1] == 3))
		board[1][2] = 2;
}

void	ft_magic_two(int **board, int **specificity)
{
	if ((board[1][2] == 4) && (board[2][1] == 4 &&
	(board[0][1] == 3) && specificity[2][1] == 3))
		board[1][1] = 2;
	if ((board[1][2] == 4) && (board[2][1] == 4 &&
	(board[3][2] == 3) && specificity[3][2] == 3))
	board[1][1] = 2;
	ft_magic_two2(board, specificity);
}
