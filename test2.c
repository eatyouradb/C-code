#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
void* my_memmove(void* dest,const void* src, size_t count)
{
	void* ret = dest;
	if (src > dest)
	{
		//
		while (count--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else
	{
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);
		}
		return ret;
	}
}
int main()
{
	char arr1[] = { 1,2,3,4,5,6,7 };
	int i = 0;
	//memmove(arr1, arr1 + 2, 4);
	my_memmove(arr1, arr1 + 2, 3);
	for (i = 0; i < 7; i++)
	{
		printf("%d\n", arr1[i]);
	}
	return 0;
}