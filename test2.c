#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int add1(int x, int y)
{
	return x + y;
}
int sub1(int x, int y)
{
	return x - y;
}
int mul1(int x, int y)
{
	return x * y;
}

int div1(int x, int y)
{
	return x / y;
}
void menu()
{
	printf("********************\n");
	printf("****** 1.add  ******\n");
	printf("****** 2.sub  ******\n");
	printf("****** 3.mul  ******\n");
	printf("****** 4.div  ******\n");
	printf("****** 0.exit ******\n");
	printf("********************\n");
}
void cal(int (*p)(int, int))
{
	int n = 0;
	int m = 0;
	printf("please input 2 numbers:>");
	scanf("%d%d", &n, &m);
	printf("%d\n", p(n, m));
}
void test()
{
	int i = 0;
	do
	{
		menu();
		printf("please choose:>");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			cal(add1);
			break;
		case 2:
			cal(sub1);
			break;
		case 3:
			cal(mul1);
			break;
		case 4:
			cal(div1);
			break;
		case 0:
			printf("exit\n");
			break;
		default:
			printf("Intput error\n");
			break;
		}
	} while (i);
}
int main()
{
	test();
	return 0;
}