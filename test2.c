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
	p->arr = malloc(5 * sizeof(int));//p指向的结构体里arr指针指向的空间可调整
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
	//调整大小
	int* p1 = realloc(p->arr, 10 * sizeof(int));//arr为int*
	if (NULL != p1)
	{
		p->arr = p1;//备份
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