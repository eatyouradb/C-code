#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int input = 0;
	printf("��Ҫ�ú�ѧϰ��? (�ú�ѧ 1/������ƽ 0)>:");
	scanf("%d", &input);
	if(input == 1)
		printf("�ɹ��ϰ�\n");
	else
	{
		printf("�����ש\n");
	}
	return 0;
}