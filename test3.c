#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	char a[1000];
	int i = 0;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	//aΪchar���ͣ���Ŵ�СΪ-128����127
	//����a�е�Ԫ��Ϊ-1,-2,-3,...,-1000
	//��a[i]=-128ʱ����һԪ��-129Ӧת��Ϊ-128����127�е�������127,126,...,1,0,-1,...
	//strlen����0ֹͣ����һ��0ǰ��1����127+��-128��������-1��������127+128��=255
	printf("%d", strlen(a));
	return 0;
}