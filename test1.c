#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
struct s
{
	char a;
	int b;
	double c;
};
void Init(struct s* x)
{
	x->a = 'w';
	x->b = 100;
	x->c = 3.14;
}
void print(struct s y)
{
	printf("%c %d %lf\n", y.a, y.b, y.c);
}
int main()
{
	struct s x = { 0 };
	Init(&x);
	print(x);
	return 0;
}