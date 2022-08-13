#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
	
}
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	printf("Player\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("Please enter coordinates:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
		{
			if (' ' == board[x - 1][y - 1])
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("This location is already occupied\n");
			}
		}
		else
		{
			printf("Input error\n");
		}
	}
	
}

void CpuMove(char board[ROW][COL], int row, int col)
{
	printf("Cpu\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (' ' == board[x][y])
		{
			board[x][y] = '#';
			break;
		}
	}
}
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

 char IsWin(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}

	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[2][i];
		}
	}

	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	if (board[2][2] == board[1][1] && board[1][1] == board[0][0] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	if (1 == IsFull(board, ROW, COL))
	{
		return 'Q';
	}
	return 'C';
}