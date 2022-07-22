#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	printf("Please enter a number:>");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;	
	}
	printf("Factorial = %d\n", ret);
	return 0;
}