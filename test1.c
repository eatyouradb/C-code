#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
struct S
{
	int n;
	float m;
	char a[10];
};
int main()
{
	struct S s = { 10,3.14f,"bit" };
	FILE* p = fopen("text.txt", "w");
	if (NULL == p)
	{
		return 0;
	}
	fprintf(p, "%d %f %s", s.n, s.m, s.a);

	fclose(p);
	p = NULL;
	return 0;
}