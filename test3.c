#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	int r = 0;
	scanf("%d%d", &n, &m);
	while ( n % m )
	{
		r = n % m;
		n = m;
		m = r;
	}
	printf("The greatest common divisor is: %d\n",m);
	return 0;
}