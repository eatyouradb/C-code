#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void Pithy_table(int x)
{
	int i = 0;
	for (i = 1; i <= x; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", j, i, i * j);
		}
		printf("\n");
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	Pithy_table(n);
	return 0;
}