#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int count_bit_one(unsigned int a)//负数换成无符号数
{
	int i = 0;
	while (a)
	{
		if (1 == a % 2)
		{
			i++;
		}
		a = a / 2;
	}
	return i;
}
//int count_bit_one(int a)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == (a >> i) & 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
int main()
{
	int a = 0;
	scanf("%d", &a);
	int count = count_bit_one(a);
	printf("%d", count);
	return 0;
}
