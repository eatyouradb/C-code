#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int length(char* arr)
{
	if (*arr != '\0')
	{
		return 1 + length(arr + 1);
	}
	else
	{
		return 0;
	}
}
int main()
{
	char arr[] = "bit";
	int le = length(arr);
	printf("%d\n", le);
	return 0;
}