#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 5;
	int b = 3;
	printf("Before a=%d,b=%d\n", a, b);
	/*a = a + b;
	b = a - b;
	a = a - b;*/
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("After a=%d,b=%d\n", a, b);
	return 0;
}
