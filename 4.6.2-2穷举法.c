#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//穷举法求100-150之间的质数
int zhishu(int num)//1代表质数,0则不是
{
	if (num == 2 || num == 3)
	{
		return 1;//质数
	}
	else
	{
		int flag = 1;//定义标识符,假定为质数
		for (int i = 2;i<num;i++)
		{
			if (num%i == 0)
			{
				flag = 0;
				break;//跳出此循环
			}
		}
		return flag;
	}
}

void main()
{
	int i = 100;
	while(i<=150)
	{
		
		if (zhishu(i) == 1)
		{
			printf("%d\n", i);
		}
		i++;
	}
	system("pause");
}