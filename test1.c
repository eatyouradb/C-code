#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void game()
{
	int ran = 0;
	int guess = 0;
	int count = 0;
	ran = rand()%100+1;
	
	while (1)
	{
		printf("Please guess>:");
		scanf("%d", &guess);
		if (guess < ran)
		{
			printf("small\n");
			count++;
		}
		else if (guess > ran)
		{
			printf("big\n");
			count++;
		}
		else
		{
			printf("You guessed right\n");
			break;
		}
		
	}
	printf("Guess times=%d\n", count);/*printf("%d\n",ran);*/
}
void title()
{
	printf("********************************************\n");
	printf("***  1 continue   *******   0  exit   ******\n");
	printf("********************************************\n");
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		title();
		printf("Please enter>:");
		scanf("%d", &input);
		switch(input)
		{
		case 0:
			printf("game over\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("Input error\n");
			break;
		}
	} 
	while (input);
	return 0;
}