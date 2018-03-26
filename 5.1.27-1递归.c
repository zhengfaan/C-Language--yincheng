#include<stdio.h>
#include<stdlib.h>

int addnum(int num)
{
	if (num)
	{
		return addnum(num-1)+num;
	}
	else
	{
		return 0;
	}
}

void main()
{
	int num = 100;
	printf("result=%d", addnum(num));
	system("pause");
}