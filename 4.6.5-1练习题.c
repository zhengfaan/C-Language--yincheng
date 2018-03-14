#include<stdio.h>
#include<stdlib.h>

//打印300以内不能被3整除的数,且相加
void main1()
{
	int res = 0;
	int i = 0;
	while (i <= 300)
	{
		if (i % 3 == 0)
		{
			//能被3整除,不执行任何操作
		}
		else
		{
			printf("\n%d", i);
			res += i;
		}
		i++;
	}
	printf("\nres=%d", res);
	system("pause");
}