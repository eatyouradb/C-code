#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a[] = { 5,4,3,2 };
	printf("%d\n", sizeof(a));        //16 sizeof(数组名)计算的是整个数组大小
	printf("%d\n", sizeof(a + 0));    //4/8 数组名这里表示的是首元素的值，a+0为首元素地址
	printf("%d\n", sizeof(*a));       //4/8 对首元素地址进行解引用操作，得到首元素的值，值为整形
	printf("%d\n", sizeof(a + 1));    //4/8 第二个元素的地址
	printf("%d\n", sizeof(a[1]));     //4/8 第二个元素的大小
	printf("%d\n", sizeof(&a));       //4/8 a整个数组的地址，因为是地址所以大小还是4/8
	printf("%d\n", sizeof(*&a));      //16 &a是数组的地址，解引用操作访问的整个数组
	printf("%d\n", sizeof(&a + 1));   //4/8 &a+1虽然地址跳过整个数组，但因为是地址所以大小还是4/8
	printf("%d\n", sizeof(&a[0]));    //4/8 首元素地址
	printf("%d\n", sizeof(&a[0] + 1));//4/8 第二个元素的地址
	return 0;
}