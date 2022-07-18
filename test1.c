#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int age = 55;
	if (age < 18)
		printf("Immaturity\n");
	else if (age >= 18 && age < 28)
		printf("Youth\n");
	else
		printf("Adult\n");
	return 0;
}
