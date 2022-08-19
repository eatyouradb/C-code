#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void Init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}
void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void Reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		int tmp = 0;
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
	int arr[] = { 0,1,2,3,4,5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	/*Init(arr, sz);*/
	Print(arr, sz);
	Reverse(arr, sz);
	Print(arr, sz);
	return 0;
}