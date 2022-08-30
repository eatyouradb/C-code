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
			//*(p + i)=p[i]
			// *(*(p + i) + j)=*((p[i])+j)=p[i][j]
			//p为数组指针指向的那一行数组
			//p+i为第一行，第二行..
			//*(p+i)为指针指向的那一行的数组名（首元素地址）
			//*(p+i)+j为指针按行从首元素向后移动之后所指向的那个元素的地址
			//*(*(p + i) + j)为该地址上的元素
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
