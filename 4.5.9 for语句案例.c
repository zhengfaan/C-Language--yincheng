#include <stdio.h>
#include <stdlib.h>

void main()
{
    int s=0,n,j;
    for(n=1,j=1;n<100;n=n+2,j++)
    {
        printf("\n%d,%d",n,j);
        s=n+j;
        printf(" s=%d\n",s);
    }
    system("pause");
}
