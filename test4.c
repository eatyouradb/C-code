#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
double power(int x, int y)
{
	if (y>0)
	{
		return x * power(x, y - 1);
	}
	else if(0==y)
	{
		return 1;
	}
	else
	{
		return 1.0 / power(x, -y);
	}
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	double m = power(n, k);
	printf("%lf\n", m);
	return 0;
}