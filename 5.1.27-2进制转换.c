#include<stdio.h>
#include<stdlib.h>

//十进制数与二进制之间转换:除2取余,逆序排列
//同理与八进制之间转换,将%2和/2改为8即可
//(89)=1011001
void change2(int num)
{
	if (num == 0)
	{
		return;
	}
	else
	{
		//printf("%d", num % 2);//在递归之上为顺序打印
		change2(num / 2);
		printf("%d", num % 2);
	}
}

void main()
{
	int num;
	printf("请输入需要转换的十进制数:");
	scanf_s("%d", &num);
	printf("转换后的二进制数为:");
	change2(num);
	system("pause");
}