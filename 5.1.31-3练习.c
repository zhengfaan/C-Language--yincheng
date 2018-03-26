#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//用递归实现1+2+3+...+n
int leijia(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return leijia(n - 1) + n;//递归运算
	}
}

void main()
{
	int num;
	printf("请输入一个整数:");
	scanf("%d", &num);
	printf("%d", leijia(num));
	system("pause");
}