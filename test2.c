#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int is_prime(int x)
//{
//	int i = 0;
//	for (i = 2; i < x; i++)
//	{
//		if (0 == x % i)
//		{
//			printf("This number is prime\n");
//			break;
//		}
//	}
//	if (i == x)
//	{
//		printf("This number is not prime\n");
//	}
//}
//int main()
//{
//	int a = 0;
//	printf("Please enter a number>:");
//	scanf("%d", &a);
//	is_prime(a);
//	return 0;
//}
#include <math.h>
int is_prime(int x)
{
	int n = 0;
	for (n = 2; n <= sqrt(x); n++)
	{
		if (0 == x % n)
		{
			return 0;/*相比break，return 0效率强，直接结束函数*/
		}
	}
	return 1;
} 
int main()
{
	int i = 0;
	int n = 0;
	for (i = 100; i <= 200; i++)
	{
		if (1 == is_prime(i))
		{
			printf("%d\n",i);
		}
	}
	return 0;
}