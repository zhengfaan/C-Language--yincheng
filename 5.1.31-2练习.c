#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//判断一个数是否为质数
int zhishu(int data)
{
	if (data <= 1)
	{
		return 0;
	}
	else if (data == 2 || data == 3)
	{
		return 1;
	}
	else
	{
		//只能被1和自身整除
		int flag = 1;//假定是质数
		for (int i = 2; i < data; i++)
		{
			if (data%i == 0)
			{
				flag= 0;
				break;
			}			
		}
		return flag; 
	}	
}

void main2()
{
	int num;
	printf("请输入一个整数:");
	scanf("%d", &num);
	int flag = zhishu(num);
	if (flag == 1)
	{
		printf("是质数");
	}
	else
	{
		printf("不是质数");
	}

	system("pause");
}