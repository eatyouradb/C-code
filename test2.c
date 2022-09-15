#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int check_sys(int a)
{
	union Un
	{
		char b;
		int i;
	}u;
	u.i = 1;
	return u.b;
}
int main()
{
	int a = 1;
	int ret = check_sys(a);
	if (1 == ret)
	{
		printf("big\n");
	}
	else
	{
		printf("small\n");
	}
	return 0;
}