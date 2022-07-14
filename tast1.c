#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 10;
	int* p = &a;
	*p = 20;
	printf("%p\n", &a);
	printf("a=%d\n",a);
	return 0;
}