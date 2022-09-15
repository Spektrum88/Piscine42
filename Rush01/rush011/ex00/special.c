void	ft_special_case(int **board, int **specificity)
{
	if ((board[2][0] == 3) && (board[2][1] == 0) &&
	(board[2][2] == 0) && (board[2][3] == 4) && (board[0][1] == 4) &&
	(specificity[1][1] == 3))
	{
		board[2][1] = 1;
		board[2][2] = 2;
	}
	if ((board[2][0] == 3) && (board[2][1] == 0) &&
	(board[2][2] == 0) && (board[2][3] == 4) && (board[0][2] == 4) &&
	(specificity[1][2] == 3))
	{
		board[2][1] = 2;
		board[2][2] = 1;
	}
	ft_special_case2(board, specificity);
void	ft_special_case2(int **board, int **specificity)
	if ((board[1][0] == 3) && (board[1][1] == 0) &&
	(board[1][2] == 0) && (board[1][3] == 4) && (board[3][1] == 4) &&
	(specificity[0][1] == 3))
	{
		board[1][1] = 1;
		board[1][2] = 2;
	}
	if ((board[1][0] == 3) && (board[1][1] == 0) &&
		(board[1][2] == 0) && (board[1][3] == 4) && (board[3][2] == 4) &&
		(specificity[0][2] == 3))
	{
		board[1][1] = 2;
		board[1][2] = 1;
	}
ft_special_case3(board, specificity);
void ft_special_case3(int **board, int **specificity)
	if ((board[2][0] == 4) && (board[2][1] == 0) &&
	(board[2][2] == 0) && (board[2][3] == 3) && (board[0][1] == 4) &&
	(specificity[1][1] == 3))
	{
		board[2][1] = 1;
		board[2][2] = 2;
	}
	if ((board[2][0] == 4) && (board[2][1] == 0) &&
	(board[2][2] == 0) && (board[2][3] == 3) && (board[0][2] == 4) &&
	(specificity[1][2] == 3))
	{
		board[2][1] = 2;
		board[2][2] = 1;
	}
	ft_special_case4(board, specificity);
void	ft_special_case4(int **board, int **specificity)
	if ((board[1][0] == 4) && (board[1][1] == 0) &&
	(board[1][2] == 0) && (board[1][3] == 3) && (board[3][1] == 4) &&
	(specificity[0][1] == 3))
	{
		board[1][1] = 1;
		board[1][2] = 2;
	}
	if ((board[1][0] == 4) && (board[1][1] == 0) &&
	(board[1][2] == 0) && (board[1][3] == 3) && (board[3][2] == 4) &&
	(specificity[0][2] == 3))
	{
		board[1][1] = 2;
		board[1][2] = 1;
	}
	ft_special_case5(board, specificity);
void ft_special_case5(int **board, int **specificity)
	if ((board[0][2] == 3) && (board[1][2] == 0) &&
	(board[2][2] == 0) && (board[3][2] == 4) && (board[1][0] == 4) &&
	(specificity[3][1] == 3))
	{
		board[1][2] = 1;
		board[2][2] = 2;
	}
	if ((board[0][2] == 3) && (board[1][2] == 0) &&
	(board[2][2] == 0) && (board[3][2] == 4) && (board[2][0] == 4) &&
	(specificity[3][2] == 3))
	{
		board[1][2] = 2;
		board[2][2] = 1;
	}
	ft_special_case6(board, specificity);
void ft_special_case6(int **board, int **specificity)
	if ((board[0][1] == 3) && (board[1][1] == 0) &&
	(board[2][1] == 0) && (board[3][1] == 4) && (board[1][3] == 4) &&
	(specificity[2][1] == 3))
	{
		board[1][1] = 1;
		board[2][1] = 2;
	}
	if ((board[0][1] == 3) && (board[1][1] == 0) &&
	(board[2][1] == 0) && (board[3][1] == 4) && (board[2][3] == 4) &&
	(specificity[2][2] == 3))
	{
		board[1][1] = 2;
		board[2][1] = 1;
	}
	ft_special_case7(board, specificity);
void ft_special_case7(int **board, int **specificity)
	if ((board[0][2] == 4) && (board[1][2] == 0) &&
	(board[2][2] == 0) && (board[3][2] == 3) && (board[1][0] == 4) &&
	(specificity[3][1] == 3))
	{
		board[1][2] = 1;
		board[2][2] = 2;
	}
	if ((board[0][2] == 4) && (board[1][2] == 0) &&
	(board[2][2] == 0) && (board[3][2] == 3) && (board[2][0] == 4) &&
	(specificity[3][2] == 3))
	{
	board[1][2] = 2;
	board[2][2] = 1;
	}
	ft_special_case8(board, specificity);
void ft_special_case8(int **board, int **specificity)
	if ((board[0][1] == 4) && (board[1][1] == 0) &&
	(board[2][1] == 0) && (board[3][1] == 3) && (board[1][3] == 4) &&
	(specificity[2][1] == 3))
	{
		board[1][1] = 1;
		board[2][1] = 2;
	}
	if ((board[0][1] == 4) && (board[1][1] == 0) &&
	(board[2][1] == 0) && (board[3][1] == 3) && (board[2][3] == 4) &&
	(specificity[2][2] == 3))
	{
		board[1][1] = 2;
		board[2][1] = 1;
	}
}

void ft_place_one(int **board, int **specificity)
{
	if ((board[1][1] == 4) && (board[2][3] == 4) &&
	(specificity[1][1] == 2) && (specificity[2][2] == 3))
	{
		board[2][0] = 2;
		board[2][1] = 1;
		board[2][3] = 3;
	}
	if ((board[2][0] == 4) && (board[1][3] == 4) &&
	(specificity[1][2] == 2) && (specificity[3][2] == 3))
	{
		board[2][1] = 3;
		board[2][2] = 1;
		board[2][3] = 2;
	}
	
void ft_place_one(int **board, int **specificity)
	if ((board[0][1] == 4) && (board[2][2] == 4) &&
	(specificity[2][2] == 2) && (specificity[1][1] == 3))
	{
		board[1][1] = 3;
		board[2][1] = 1;
		board[3][1] = 2;
	}
	if ((board[0][2] == 4) && (board[2][1] == 4) &&
	(specificity[3][2] == 2) && (specificity[1][2] == 3))
	{
		board[1][2] = 3;
		board[2][2] = 1;
		board[3][2] = 2;
	}
void ft_place_one(int **board, int **specificity)
	if ((board[1][0] == 4) && (board[2][2] == 4) &&
	(specificity[0][2] == 2) && (specificity[3][1] == 3))
	{
		board[1][1] = 3;
		board[1][2] = 1;
		board[1][3] = 2;
	}
	if ((board[1][3] == 4) && (board[2][1] == 4) &&
	(specificity[0][1] == 2) && (specificity[2][1] == 3))
	{
		board[0][1] = 2;
		board[2][2] = 1;
		board[1][2] = 3;
	}
void ft_place_one(int **board, int **specificity)
	if ((board[1][3] == 4) && (board[3][1] == 4) &&
	(specificity[2][1] == 2) && (specificity[0][2] == 3))
	{
		board[0][1] = 2;
		board[1][1] = 1;
		board[2][1] = 3;
	}
	if ((board[1][1] == 4) && (board[3][2] == 4) &&
	(specificity[3][1] == 2) && (specificity[0][3] == 3))
	{
		board[0][2] = 2;
		board[1][2] = 1;
		board[2][2] = 3;
	}
}

void ft_special_three(int **board, int **specificity)
{
	if ((board[1][3] == 4) && (board[2][1] == 4) &&
	(specificity[0][1] == 3) && (specificity[2][1] == 3))
	{
		board[1][0] = 1;
		board[1][1] = 3;
		board[1][2] = 2;
	}
	if ((board[1][0] == 4) && (board[2][2] == 4) &&
	(specificity[0][2] == 3) && (specificity[3][1] == 3))
	{
		board[1][1] = 2;
		board[1][2] = 3;
		board[1][3] = 1;
	}
	if ((board[0][1] == 4) && (board[2][2] == 4) &&
	(specificity[1][1] == 3) && (specificity[2][2] == 3))
	{
		board[1][1] = 2;
		board[2][1] = 3;
		board[3][1] = 1;
	}
	if ((board[0][2] == 4) && (board[2][1] == 4) &&
	(specificity[1][2] == 3) && (specificity[3][2] == 3))
	{
		board[1][2] = 2;
		board[2][2] = 1;
		board[3][2] = 3;
	}
	if ((board[1][1] == 4) && (board[3][2] == 4) &&
	(specificity[0][2] == 3) && (specificity[3][1] == 3))
	{
		board[0][2] = 1;
		board[1][2] = 3;
		board[2][2] = 2;
	}
	if ((board[3][1] == 4) && (board[1][2] == 4) &&
	(specificity[0][1] == 3) && (specificity[2][1] == 3))
	{
		board[0][1] = 1;
		board[1][1] = 3;
		board[2][1] = 2;
	}
	if ((board[2][3] == 4) && (board[1][1] == 4) &&
	(specificity[1][1] == 3) && (specificity[2][2] == 3))
	{
		board[2][0] = 1;
		board[2][1] = 3;
		board[2][3] = 2;
	}
}

void	ft_special_one2(int **board, int **specificity)
{
	if ((board[1][3] == 4) && (board[2][1] == 4) &&
	(specificity[0][1] == 2) && (specificity[2][1] == 3))
	{
		board[1][0] = 2;
		board[1][1] = 1;
		board[1][2] = 3;
	}
	if ((board[1][0] == 4) && (board[2][2] == 4) &&
	(specificity[0][2] == 2) && (specificity[3][1] == 3))
	{
		board[1][1] = 3;
		board[1][2] = 1;
		board[1][3] = 2;
	}
	if ((board[0][1] == 4) && (board[2][2] == 4) &&
	(specificity[1][1] == 3) && (specificity[2][2] == 2))
	{
		board[1][1] = 3;
		board[2][1] = 1;
		board[3][1] = 2;
	}
	ft_special_one3(board, specificity);
}

void	ft_special_one3(int **board, int **specificity)
	if ((board[0][2] == 4) && (board[2][1] == 4) &&
	(specificity[1][2] == 3) && (specificity[3][2] == 2))
	{
		board[1][2] = 3;
		board[2][2] = 1;
		board[3][2] = 2;
	}
	if ((board[1][1] == 4) && (board[3][2] == 4) &&
	(specificity[0][2] == 3) && (specificity[3][1] == 2))
	{
		board[0][2] = 2;
		board[1][2] = 1;
		board[2][2] = 3;
	}
    ft_special_one4(board, specificity);
}

void	ft_special_one4(int **board, int **specificity)
	if ((board[3][1] == 4) && (board[1][2] == 4) &&
	(specificity[0][1] == 3) && (specificity[2][1] == 2))
	{
		board[0][1] = 2;
		board[1][1] = 1;
		board[2][1] = 3;
	}
	if ((board[2][3] == 4) && (board[1][1] == 4) &&
	(specificity[1][1] == 2) && (specificity[2][2] == 3))
	{
		board[2][0] = 2;
		board[2][1] = 1;
		board[2][3] = 3;
	}
}

void	ft_special_one(int **board, int **specificity)
{
	if ((board[1][3] == 4) && (board[2][1] == 4) &&
	(specificity[0][1] == 2) && (specificity[2][1] == 3))
	{
		board[1][0] = 2;
		board[1][1] = 1;
		board[1][2] = 3;
	}
	if ((board[1][0] == 4) && (board[2][2] == 4) &&
	(specificity[0][2] == 2) && (specificity[3][1] == 3))
	{
		board[1][1] = 3;
		board[1][2] = 1;
		board[1][3] = 2;
	}
	if ((board[0][1] == 4) && (board[2][2] == 4) &&
	(specificity[1][1] == 3) && (specificity[2][2] == 2))
	{
		board[1][1] = 3;
		board[2][1] = 1;
		board[3][1] = 2;
	}
    ft_special_one2(board, specificity);
}
