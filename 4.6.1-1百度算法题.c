#include <stdio.h>
#include <stdlib.h>

//1234  4321
//1234=1000+200+30+4=1*10^3+2*10^2+3*10^1+4
//4321=4*10^3+3*10^2+2*10^1+1

int getwei(int num)
{
    int num1=num;
    int wei=0;
    for(num1;num1;num1/=10)
    {
        wei++;
    }
    return wei;
}

//10^n
int get10(int n)
{
    int res=1,i;
    for(i=0;i<n;i++)
    {
        res*=10;
    }
    return res;
}

void main()
{
    int num;
    scanf("%d",&num);
    printf("num=%d",num);
    int wei=getwei(num);
    printf("\nwei=%d",wei);
    //打印位数
    int num2=num;
    int i=0;
    for(i;i<wei;i++)
    {
        int shu;
        shu=num2%10;//每次取出最小位
        num2/=10;//递进去掉最后一位
        printf("\nshu=%d,num2=%d,wei=%d\n",shu,num2,wei);

    }



    system("pause");
}
