#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a[] = { 5,4,3,2 };
	printf("%d\n", sizeof(a));        //16 sizeof(������)����������������С
	printf("%d\n", sizeof(a + 0));    //4/8 �����������ʾ������Ԫ�ص�ֵ��a+0Ϊ��Ԫ�ص�ַ
	printf("%d\n", sizeof(*a));       //4/8 ����Ԫ�ص�ַ���н����ò������õ���Ԫ�ص�ֵ��ֵΪ����
	printf("%d\n", sizeof(a + 1));    //4/8 �ڶ���Ԫ�صĵ�ַ
	printf("%d\n", sizeof(a[1]));     //4/8 �ڶ���Ԫ�صĴ�С
	printf("%d\n", sizeof(&a));       //4/8 a��������ĵ�ַ����Ϊ�ǵ�ַ���Դ�С����4/8
	printf("%d\n", sizeof(*&a));      //16 &a������ĵ�ַ�������ò������ʵ���������
	printf("%d\n", sizeof(&a + 1));   //4/8 &a+1��Ȼ��ַ�����������飬����Ϊ�ǵ�ַ���Դ�С����4/8
	printf("%d\n", sizeof(&a[0]));    //4/8 ��Ԫ�ص�ַ
	printf("%d\n", sizeof(&a[0] + 1));//4/8 �ڶ���Ԫ�صĵ�ַ
	return 0;
}