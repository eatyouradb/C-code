#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	/*char arr1[] = "abcdef";
	int i = 0;
	int len = strlen(arr1);
	for (i = 0; i < len; i++)
	{
		printf("%c ", arr1[i]);
	}*/
	int arr2[] = { 1,2,3,4,5,6,7,8,9,0 };
	int sz = sizeof(arr2) / sizeof(arr2[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}