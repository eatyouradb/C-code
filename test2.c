#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
struct S
{
	int n;
	int* arr;
};
int main()
{
	struct S* p = (struct S*)malloc(sizeof(struct S));
	p->arr = malloc(5 * sizeof(int));//pָ��Ľṹ����arrָ��ָ��Ŀռ�ɵ���
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		p->arr[i] = i;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", p->arr[i]);
	}
	printf("\n");
	//������С
	int* p1 = realloc(p->arr, 10 * sizeof(int));//arrΪint*
	if (NULL != p1)
	{
		p->arr = p1;//����
	}
	for (i = 5; i < 10; i++)
	{
		p->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", p->arr[i]);
	}
	free(p->arr);
	p->arr = NULL;
	free(p);
	p = NULL;
	return 0;
}