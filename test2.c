#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int my_strlen(char* arr)
{
	int count = 0;
	while(*arr)
	{
		count++;
		arr++;
	}
	return count;
}
//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	while (left < right)
//	{
//		int tmp = 0;
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}

void reverse_string(char arr[])
{
	char tmp = arr[0];

	int len = my_strlen(arr);
	arr[0] = arr[len - 1];

	arr[len - 1] = '\0';
	if (my_strlen(arr + 1) >= 2)
	{
		reverse_string(arr + 1);
	}

	arr[len - 1] = tmp;
}
int main()
{
	char arr[] = "abcefg";
	/*int sz = sizeof(arr) / sizeof(arr[0]);*/
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}