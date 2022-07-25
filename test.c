#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
struct Book
{
	char name[20];
	short price;
};
int main()
{
	struct Book A = { "C Language",55 };
	printf("Book Name=%s\n", A.name);
	printf("Book Price=%d\n", A.price);
	A.price=40;
	printf("Discount Price=%d");
	return 0;
	
}
