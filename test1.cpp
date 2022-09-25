#define _CRT_SECURE_NO_WARNINGS 1
#define MAXSIZE 10
#define ERROR 0
#define OK 1
#include <stdio.h>
#include <stdlib.h>
typedef struct
{
	int elem[MAXSIZE];
	int length;
}SqList;
void InitList(SqList& L)
{
	L.length = 0;
}
bool ListInsert(SqList& L, int i, int e)
{
	if (i<1 || i>L.length+1) return ERROR;
	if (L.length == MAXSIZE) return ERROR;
	int j = 0;
	for (j = L.length - 1; j > i - 1; j--)
		L.elem[j] = L.elem[j - 1];
	L.elem[i] = e;
	L.length++;
	return OK;
}
void ClearList(SqList& L)
{
	L.length = 0;
}
int main()
{
	SqList L;
	bool ret;
	InitList(L);
	L.elem[0] = 1;
	L.elem[1] = 2;
	L.elem[2] = 3;
	L.elem[3] = 4;
	L.length = 5;
	ret = ListInsert(L, 2, 2);
	if (ret)
	{
		printf("success\n");
	}
	else
	{
		printf("error\n");
	}
	ClearList(L);
	return 0;
}