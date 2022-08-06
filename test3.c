#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Fac(int x)
{
	if (x <= 1)
	{
		return 1;
	}
	else
	{
		/*for (i = 1; i <= x; i++)
		{
			ret *= i;
		}*/
		return x * Fac(x - 1);
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int f = Fac(n);
	printf("%d\n", f);
}