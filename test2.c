#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 3; n++)
	{
		for (i = 1; i <= n; i++)
		{
			ret = ret * n;
		}//nµÄ½×³Ë
		sum = ret + sum;//½×³ËÏà¼Ó
	}
	
	printf("%d\n", sum);
	return 0;
}