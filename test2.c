#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void print1(int(*p)[5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ", *(*(p + i) + j));
			//pΪ����ָ��ָ�����һ������
			//p+iΪ��һ�У��ڶ���..
			//*(p+i)Ϊָ��ָ�����һ�е�����������Ԫ�ص�ַ��
			//*(p+i)+jΪָ�밴�д���Ԫ������ƶ�֮����ָ����Ǹ�Ԫ�صĵ�ַ
			//*(*(p + i) + j)Ϊ�õ�ַ�ϵ�Ԫ��
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print1(arr, 3, 5);
	return 0;
}
