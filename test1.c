#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}

int div(int x, int y)
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
void test()
{
	int i = 0;
	int x = 0;
	int y = 0;
	int (*p[])(int, int) = { 0,add,sub,mul,div };
	do
	{
		menu();
		printf("please choose:>");
		scanf("%d", &i);
		if (i >= 1 && i <= 4)
		{
			printf("please input 2 numbers:>");
			scanf("%d%d", &x, &y);
			int ret = p[i](x, y);
			printf("%d\n", ret);
		}
		else if (0 == i)
		{
			printf("exit\n");
		}
		else
		{
			printf("Intput error\n");
		}
		/*switch (i)
		{
		case 1:
			printf("please input 2 numbers:>");
			scanf("%d%d", &x, &y);
			printf("%d\n",add(x, y));
			break;
		case 2:
			printf("please input 2 numbers:>");
			scanf("%d%d", &x, &y);
			printf("%d\n", sub(x, y));
			break;
		case 3:
			printf("please input 2 numbers:>");
			scanf("%d%d", &x, &y);
			printf("%d\n", mul(x, y));
			break;
		case 4:
			printf("please input 2 numbers:>");
			scanf("%d%d", &x, &y);
			printf("%d\n", div(x, y));
			break;
		case 0:
			printf("exit\n");
			break;
		default:
			printf("Intput error\n");
			break;
		}
	} while (i);*/
	} while (i);
}
int main()
{
	test();
	return 0;
}