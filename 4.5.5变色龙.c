#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

void main1()
{
    char str[20];
    int j=0;
    char strl[40];

    while(1)
    {
        int i;
        for(i=0;i<16;i++)
        {
            sprintf(str,"color %x%x",i,15-i);//打印字符串
            system(str);//执行指令，改变颜色
            printf("\n%s",str);//打印字符串

            sprintf(strl,"title 启动%d s",j);
            j++;
            system(strl);//改变标题
            Sleep(1000);
        }
    }
}

void main()
{
    char str[20];
    int j=0;
    char strl[40];

    while(1)
    {
        int i=0;
        while(i<16)
        {
            sprintf(str,"color %x%x",i,15-i);//打印字符串
            system(str);//执行指令，改变颜色
            printf("\n%s",str);//打印字符串

            sprintf(strl,"title 启动%d s",j);
            j++;
            system(strl);//改变标题
            Sleep(1000);
            i++;
        }
    }
}
