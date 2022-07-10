#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a = 10;
	int b = 20;
	int max = Max(a, b);
	/*if (a > b)
		printf("a is bigger than b");
	else
		printf("b is bigger than a");*/
	printf("max=%d\n", max);
	return 0;
}