#include<stdio.h>
#include<stdlib.h>

//求12345的整数位

//定义递归的函数体
int zhengshu(int num)
{
	if (num == 0)
	{
		return 0;
	}
	else
	{
		return zhengshu(num / 10) + 1;
	}
}

void main()
{
	int num;
	scanf_s("%d", &num);//初始化num
	int wei = zhengshu(num);
	printf("wei=%d", wei);
	system("pause");
}