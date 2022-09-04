#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int cmp(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void swap(char* buf1, char* buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
int bubble_sort(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
void test()
{
	int arr[5] = { 5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	bubble_sort(arr, sz, sizeof(arr[0]), cmp);
	for (i = 0; i < sz ; i++)
	{
		printf("%d", arr[i]);
	}
}
int main()
{
	test();
	return 0;
}