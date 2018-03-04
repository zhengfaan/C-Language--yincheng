#include<stdio.h>
#include<stdlib.h>

void main1()
{
    int i=1,n;
    long int p=1;
    scanf("%d",&n);
    while(i<=n)
    {
        p*=2;
        i++;
    }
    printf("%ld\n",p);
}
