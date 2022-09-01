#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int main()
{
	int (*p[4])(int, int) = { Add,Sub,Mul,Div };
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%d\n", p[i](2, 3));
		//p[i]就是访问数组里的每个元素（每个函数的地址），不需加*
	}
	return 0;
}