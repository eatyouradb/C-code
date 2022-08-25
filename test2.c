#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
int my_strlen(const char* arr)
{
	int count = 0;
	assert(arr != NULL);
	while (*arr != '\0')
	{
		count++;
		arr++;
	}
	return count;
}
int main()
{
	char arr[] = "abcde";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}