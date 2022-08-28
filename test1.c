#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while ('\0' != *end)
	{
		end++;
	}
	return end - start;
}
int main()
{
	char arr[] = "bit";
	printf("%d", my_strlen(arr));
	return 0;
}