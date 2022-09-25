#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define max(x,y) ((x)>(y)?(x):(y))
int main()
{
	int a = 10;
	int b = 11;
	printf("%d\n", max(a++, b++));
	//((a++)>(b++)?(a++):(b++))
	//执行a>b,不大于,返回b++（12）
	//然后a++(11),b++(13)
	printf("%d\n", a);
	printf("%d\n", b);
}
