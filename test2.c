#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int num = 0;
	int count = 0;
	int i = 0;
	printf("please input a number;>");
	scanf("%d", &num);
	for (i = 0; i < 32; i++)
	{
		if (1 == ((num >> i) & 1))
		{
			count++;
		}
	}
	/*while (num)
	{
		if (1 == num % 2)
		{
			count++;
		}
		num = num / 2;
	}*/
	//负数无法计算
	printf("%d\n", count);
	return 0;
}