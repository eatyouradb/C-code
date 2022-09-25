#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4 };
	int n = 5;
	int i = 3;
	arr[i + 1] = arr[i];
	arr[i] = arr[i - 1];
	arr[i - 1] = n;
	int m = 0;
	for (m = 0; m < 10; m++)
	{
		printf("%d ", arr[m]);
	}
	return 0;
}