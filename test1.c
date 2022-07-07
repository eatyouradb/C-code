#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int input = 0;
	printf("你要好好学习吗? (好好学 1/天天躺平 0)>:");
	scanf("%d", &input);
	if(input == 1)
		printf("成功上岸\n");
	else
	{
		printf("天天搬砖\n");
	}
	return 0;
}