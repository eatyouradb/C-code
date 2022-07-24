#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz-1;
	int k = 0;
	printf("Please enter the value you want to find:>");
	scanf("%d", &k);
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("The position of this value is in %d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("The value cannot be found\n");
	}
	return 0;
}