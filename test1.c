#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	while (*src!=0)
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;//'\0'
//}
// 
//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

char* my_strcpy(char* dest, const char* src)//源头数据*src不能被改变//返回值优化
{
	int* ret = dest;
	assert(dest != NULL);//断言，优化
	assert(src != NULL);
	while (*dest++ = *src++)//优化
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[] = "############";
	char arr2[] = "hello";
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}
