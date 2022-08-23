#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 1; i <= 12; i++)
	{
		printf("haha\n");
		arr[i] = 0;
	}
	return 0;
}
//i与arr都为局部变量，存储在内存中的栈区
//栈区默认是先使用高地址，再使用低地址，所以i的地址比arr的地址高
//因为arr是数组，数组默认是随下标的增加，地址由低到高变化
//当arr持续越界时，地址逐渐升高，就有可能遇到i的地址
//这时改变arr的值，i的值也变，程序就可能陷入死循环