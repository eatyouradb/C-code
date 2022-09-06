#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>

char* my_strcat(char* arr1, const char* arr2)
{
	char* ret = arr1;
	assert(arr1 && arr2);
	while (*arr1 != 0)
	{
		arr1++;
	}
	while (*arr1++ = *arr2++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[30] = "abcd";
	char arr2[] = "1234";
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}