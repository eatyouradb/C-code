#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char password[20] = { 0 };
	int ch = 0;
	int ret = 0;
	printf("Input password:>");
	scanf("%s", password);
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("Please confirm(Y/N):>");
	ret = getchar();
	if ('Y' == ret)
		printf("Confirmation successful\n");
	else
		printf("Confirmation failed\n");
	return 0;
}