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
void print1(struct s y)//传值
{
	printf("%c %d %lf\n", y.a, y.b, y.c);
}
void print2(struct s* z)//传址
{
	printf("%c %d %lf\n", z->a, z->b, z->c);
}
int main()
{
	struct s x = { 0 };
	Init(&x);
	print1(x);
	print2(&x);
	return 0;
}
