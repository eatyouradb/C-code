#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
void* my_memcpy(void* dest, void* src, size_t count)
{
	char* ret = dest;
	while (count--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;//dest++,��void���Ͳ���++,����ǿ��ת����char*��++,
		++(char*)src;//����Ϊ++���ȶȸ���(char*)������Ӧ��ת����++
	}
	return ret;
}
int main()
{
	char arr1[] = { 1,2,3,4,5 };
	char arr2[10] = { 0 };
	int i = 0;
	int p = sizeof(arr2) / sizeof(arr2[0]);
	/*memcpy(arr2, arr1, sizeof(arr1));*/
	my_memcpy(arr2, arr1, sizeof(arr1));
	for (i = 0; i < p; i++)
	{
		printf("%d\n", arr2[i]);
	}
	
	return 0;
}