#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//求数值位数
//1234	123	12	1	0
int wei(int data)
{
	int length = 0;//计数器
	for (; data; data /= 10)
	{
		length++;
	}
	return length;
}

void main1()
{
	int num;
	printf("请输入一个整数:");
	scanf("%d", &num);
	printf("%d", wei(num));

	system("pause");
}