#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int age = 55;
	if (age < 18)
		printf("δ����\n");
	else if (age >= 18 && age < 28)
		printf("����\n");
	else
		printf("����\n");
	return 0;
}