#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
struct Book
{
	char name[20];
	short price;
};
int main()
{
	struct Book A = { "C语言",55 };
	printf("书名=%s\n", A.name);
	printf("价格=%d\n", A.price);
	return 0;
}