#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)
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