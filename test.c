#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
struct Book
{
	char name[20];
	short price;
};
int main()
{
	struct Book A = { "C����",55 };
	printf("����=%s\n", A.name);
	printf("�۸�=%d\n", A.price);
	return 0;
}