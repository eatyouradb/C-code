#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (9 == i % 10)
		{
			count++;//个位为9
		}
		if (9 == i / 10)
		{
			count++;//十位为9
		}
		
	}
	printf("count=%d\n", count);
	return 0;
}
