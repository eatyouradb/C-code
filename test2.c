#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void Gem(char* p)
{
	p = (char*)malloc(100);
}
////��һ��
////void Gem(char* *p)//��char*���ͽ�����
////{
////	*p = (char*)malloc(100);//*p�ȼ���str
////}
//������
//char* Gem(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
void test(void)
{
	char* str = NULL;////��NULL�ĵ�ַ����str
	Gem(str);
	////Gem(&str);
	//str=Gem(str);
	strcpy(str, "hello world");
	printf(str);
	//free(str);
	//str=NULL;
}
int main()
{
	test();
	return 0;
}
//δ�ͷ�,���ڳ����ڴ�й©
//strָ��NULL��str��ֵ���ݵ���ʽ����p��pΪGem���βΣ�pֻ��Gem��������Ч
//����ʱ��̬�ڴ���δ�ͷţ����޷��ҵ�