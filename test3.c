#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
print(int n)
{
	int i = 0;
	for (i = 30; i >= 0; i -= 2)//奇数位
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
	for (i = 31; i >= 0; i -= 2)//偶数位
	{
		printf("%d ", (n >> i) & 1);
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	print(n);
	return 0;
}