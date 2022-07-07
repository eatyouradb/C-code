#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[5] = { 1,2,3,4,5 };
	int i = 0;
	while (i<5)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return 0;
}