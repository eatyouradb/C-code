#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
struct S
{
	int n;
	int arr[0];
};
int main()
{
	struct S s;
	struct S* p = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
	//����arr����5��int
	p->n = 100;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		p->arr[i] = i;
	}
	//����5��int����,��Ҫ10��int
	struct S* p1 = realloc(p, 44);//4+10*4
	if (NULL != p1)
	{
		p1 = p;
	}
	for (i = 5; i < 10; i++)
	{
		p1->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", p1->arr[i]);
	}
	free(p);
	p = NULL;
	return 0;
}