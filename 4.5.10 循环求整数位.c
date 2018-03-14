#include <stdio.h>
#include <stdlib.h>

//以while循环方式实现
int whilenum(int num)
{
    int i=0;
    while(num)
    {
        num/=10;
        i++;

    }
    return i;
}

//do...while循环实现求整数位数
int dowhilenum(int num)
{
    int i=0;
    do
    {
        num/=10;
        i++;
    }while(num);
    return i;
}

//for循环实现求整数位数
int forxunhuan(int num)
{
    int i;
    for(i=0;num;i++)
    {
        num/=10;

    }
    return i;
}

//goto语句实现
int gotonum(int num)
{
    int i=0;
QIU:if(num)
    {
        num/=10;
        i++;
        goto QIU;
    }
    return i;
}

void main()
{
    int num;
    scanf("%d",&num);
    printf("whilenum=%d",whilenum(num));//调用函数获取位数
    printf("\ndowhilenum=%d",dowhilenum(num));
    printf("\nforxunhuan=%d",forxunhuan(num));
    printf("\ngotonum=%d",gotonum(num));
    system("pause");
}
