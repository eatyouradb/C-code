#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void Swap(int* pa, int* pb)
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
int main()
{
	int a = 0;
	int b = 0;
	printf("Please enter two numbers>:");
	scanf("%d%d", &a, &b);
	Swap(&a, &b);
	printf("%d,%d", a, b);
	return 0;
}