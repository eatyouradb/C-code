#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
void menu()
{
	printf("**********************\n");
	printf("****1 play***0 exit***\n");
	printf("**********************\n");
}
void game()
{
	char arr = 0;
	char board[ROW][COL] = { 0 };
	InitBoard(board,ROW,COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		arr = IsWin(board, ROW, COL);
		if (arr != 'C')
		{
			break;
		}
		CpuMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		arr = IsWin(board, ROW, COL);
		if (arr != 'C')
		{
			break;
		}
	}
	if ('*' == arr)
		{
			printf("Player Win\n");
		}
		else if ('#' == arr)
		{
			printf("CPU Win\n");
		}
		else
		{
			printf("Draw\n");
		}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("please enter:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("game continue\n");
			game();
			break;
		case 0:
			printf("game over\n");
			break;
		default:
			printf("Input error\n");
			break;
		}
	}while (input);
	
}
int main()
{
	test();
	return 0;
}