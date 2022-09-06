#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int my_strcmp(char* arr1, char* arr2)
{
	while (*arr1 == *arr2)
	{
		if ('\0' == *arr1)
		{
			return 0;
		}
		arr1++;
		arr2++;
	}
	/*if (*arr1 < *arr2)
		return -1;
	else
		return 1;*/
	return (*arr1 - *arr2);
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abght";
	int ret = my_strcmp(arr1, arr2);
	if (ret < 0)
	{
		printf("arr1<arr2\n");
	}
	else if (ret > 0)
	{
		printf("arr1>arr2\n");
	}
	else
	{
		printf("arr1=arr2\n");
	}
	return 0;
}
