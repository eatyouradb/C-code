#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (9 == i % 10)
		{
			printf("%d ", i);//��λΪ9
		}
		else if (9 == i / 10)
		{
			printf("%d ", i);//ʮλΪ9
		}
	}
	return 0;
}