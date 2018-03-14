#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i,j,multi;
    printf("¾Å¾Å³Ë·¨±í\n");
    for(i=1;i<10;i++)
    {
        for(j=1;j<=i;j++)
        {
            multi=i*j;
            printf("%d*%d=%2d ",i,j,multi);
            /*if(j==9)
            {
                printf("\n");
            }*/
        }
        printf("\n");
    }
    getchar();
}
