#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//任何一个大于4的偶数都可以拆解为两个质数之和

int isit(int num)
{
	//质数只能被1和自身整除
	if (num == 1)
	{
		return 0;
	}
	else if (num == 2 || num == 3)
	{
		return 1;
	}
	else
	{
		int flag = 1;//假定num为质数
		for (int i = 2; i < num; i++)
		{
			if (num%i==0)//num可以整除i
			{
				flag = 0;//不是质数
				break;
			}
		}
		return flag;		
	}
}

void test()
{
	int data;
	printf("请输入一个数:");
	scanf("%d", &data);
	if (isit(data) == 1)
	{
		printf("%d是质数", data);
	}
	else
	{
		printf("不是质数");
	}
	system("pause");
}
//判断是否为偶数
int oushu(int num)
{
	if (num % 2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void main()
{
	int data;
	printf("请输入一个数:");
	scanf("%d", &data);
	if (oushu(data) == 0)
	{
		printf("ERROR");
		system("pause");
	}
	else
	{
		if (data == 2)
		{
			printf("小伙,你输入的偶数太小");
			
		}
		else
		{
			for (int i = 2; i < data; i++)
			{
				if (isit(i) == 1 && isit(data - i) == 1)//实现拆解
				{
					printf("%d=%d+%d", data, i, data - i);
					break;
				}
			}
		}
	}
	system("pause");
}