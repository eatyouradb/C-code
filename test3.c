#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int calculate(unsigned int n)
{
	if (n>9)
	{
		return calculate(n / 10) + n % 10;
	}
	else
	{
		return n;
	}
}
int main()
{
	unsigned int n = 0;
	scanf("%d", &n);
	printf("%d", calculate(n));
	return 0;
}
