#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)
//0是地址，把它强制转换成struct_name*类型
//用(struct_name*)0的地址找到成员a,b,c
//((struct_name*)0)->member_name是变量，需要拿其地址
//a/b/c的地址减去起始位置0得到偏移量->所以a/b/c的地址就是偏移量
//偏移量是整型，&(((struct_name*)0)->member_name)强制转换成int
struct S
{
	char a;
	int b;
	char c;
};
int main()
{
	struct S s;
	printf("%d\n", OFFSETOF(struct S, a));
	printf("%d\n", OFFSETOF(struct S, b));
	printf("%d\n", OFFSETOF(struct S, c));
	return 0;
}
