#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int binary_search(int arr[],int k,int sz)
{
	int left = 0;
	/*int sz = sizeof(arr) / sizeof(arr[0]);*/
	//sizeof(arr)传递的是arr的首元素的下标，sizeof(arr)==4
	int right = sz-1;
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
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,5,8,9,12,13};
	int k = 0;
	printf("Please enter a number>:");
	scanf("%d", &k);
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k, sz);
	if (-1 == ret)
	{
		printf("The number is not in the array\n");
	}
	else
	{
		printf("The number is in the array,Subscript is=%d\n",ret);
	}
	return 0;
}