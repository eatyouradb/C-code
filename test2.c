#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void Gem(char* p)
{
	p = (char*)malloc(100);
}
////法一：
////void Gem(char* *p)//对char*类型解引用
////{
////	*p = (char*)malloc(100);//*p等价于str
////}
//法二：
//char* Gem(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
void test(void)
{
	char* str = NULL;////把NULL的地址放入str
	Gem(str);
	////Gem(&str);
	//str=Gem(str);
	strcpy(str, "hello world");
	printf(str);
	//free(str);
	//str=NULL;
}
int main()
{
	test();
	return 0;
}
//未释放,存在程序内存泄漏
//str指向NULL，str以值传递的形式传给p，p为Gem的形参，p只在Gem函数内有效
//返回时动态内存尚未释放，且无法找到