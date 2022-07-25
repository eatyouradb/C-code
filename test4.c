#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
	int i = 0;
	int count = 0;
	int j = 0;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j <= sqrt(i); j++)//若i能被整除，则i=a*b,那么a&b<=sqrt(i)
		{
			if (0==i % j)
			{
				break;
			}
		}//1.被整除  2.j都不能整除i
		if (j > sqrt(i))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount=%d", count);
	return 0;
}
