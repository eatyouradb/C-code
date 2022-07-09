#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	int arr[10] = {0};
	int sz = 0;
	printf("%d\n", sizeof(arr));
	sz=sizeof(arr) / sizeof(arr[0]);
	printf("sz = %d\n", sz);
	return 0;
}