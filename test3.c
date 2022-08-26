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
	//a为char类型，存放大小为-128——127
	//数组a中的元素为-1,-2,-3,...,-1000
	//当a[i]=-128时，下一元素-129应转化为-128——127中的数，即127,126,...,1,0,-1,...
	//strlen遇到0停止，第一个0前有1——127+（-128）——（-1）个数（127+128）=255
	printf("%d", strlen(a));
	return 0;
}