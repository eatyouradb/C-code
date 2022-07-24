#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	int i = 0;
	char password[20] = {0};
	for (i = 0; i < 3; i++)
	{
		printf("password:> ");
		scanf("%s", password);
		if (strcmp(password, "555") == 0)
		{
			printf("password correct\n");
			break;
		}
		else
		{
			printf("Password error\n");
		}
	}
	if (3 == i)
	{
		printf("Three attempts failed, the program has been exited\n");
	}
	return 0;
}