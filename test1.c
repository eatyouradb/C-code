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
	//����1��С��
	//����0�����
	return *(char*)&a;
	//a�ĵ�ַǿ��ת��Ϊchar*
	//��char*�ĵ�ַ������
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