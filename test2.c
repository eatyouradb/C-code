#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int get_count_one(int m, int n)
{
	int tmp = 0;
	int count = 0;
	tmp = m ^ n;
	while (tmp)
	{
		tmp = tmp & (tmp - 1);
		count++;
	}
	return count;
}

int main()
{
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);
	int count = get_count_one(m, n);
	printf("count=%d\n", count);
	return 0;
}