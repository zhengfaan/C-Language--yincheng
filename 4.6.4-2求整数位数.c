#include<stdio.h>
#include<stdlib.h>

//12345的整数位
void main2()
{
	int num;
	scanf_s("%d", &num);//初始化num
	int wei = 0;
	for (;num;wei++)
	{
		num /= 10;
	}
	printf("wei=%d", wei);
	system("pause");
}