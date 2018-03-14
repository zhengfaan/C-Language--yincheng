#include <stdio.h>
#include <stdlib.h>

//今有雉（鸡）兔同笼，上有三十五头，下有九十四足。问雉兔各几何。

void main()
{
    int x=0,y;
    for(x;x<=35;x++)
    {
        y=(94-4*x)/2;
        if(x+y==35)
        printf("鸡有%d只,兔有%d只",y,x);
        break;

    }
    getchar();
}
