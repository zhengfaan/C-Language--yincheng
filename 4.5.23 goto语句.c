#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n=1,sum=0;
loop: if(n<101)
        {
            sum+=n;
            n++;
            goto loop;
        }
        printf("%d",sum);
        getchar();
}
