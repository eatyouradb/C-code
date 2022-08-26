#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int check_syt()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (1 == *p)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int check_syt()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	return *p;
//}
int check_syt()
{
	int a = 1;
	//返回1，小端
	//返回0，大端
	return *(char*)&a;
	//a的地址强制转换为char*
	//对char*的地址解引用
}
int main()
{
	if (1 == check_syt())
	{
		printf("Small end\n");
	}
	else
	{
		printf("Big end\n");
	}
	return 0;
}