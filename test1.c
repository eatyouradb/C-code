#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void my_strcpy(char* dest, char* src)
{
	while (*src!=0)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = *src;
}
int main()
{
	char arr1[] = "############";
	char arr2[] = "hello";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}