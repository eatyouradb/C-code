#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int Leap_year(int x)
//{
//	if (x % 4 == 0 && x % 100 == !0 || 0 == x % 400)
//	{
//		printf("This year is a leap year\n");
//	}
//	else
//	{
//		printf("This year is a leap year\n");
//	}
//}
//int main()
//{
//	int i = 0;
//	printf("Please enter the year>:");
//	scanf("%d", &i);
//	Leap_year(i);
//
//	return 0;
//}Ì«´ì£¬²»Õû½à¸É¾»
int Leap_year(int x)
{
	if ((0 == x % 4 && x % 100 != 0) || 0 == x % 400)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (1 == Leap_year(year))
		{
			printf("%d\n", year);
		}
	}
	return 0;
}