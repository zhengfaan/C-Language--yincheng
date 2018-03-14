#include<stdio.h>
#include<stdlib.h>

//345 345%10=5
//345 345/10=34 34%10=4
//345 345/100=3

void main()
 {
 	int i;
 	for(i=100;i<=999;i++)
 	{
	 	int ge=i%10;
	 	int shi=i/10%10;
	 	int bai=i/100;
	 	if(ge*ge*ge+shi*shi*shi+bai*bai*bai==i)
	 	{
	 		printf("%d^3+%d^3+%d^3=%d",ge,shi,bai,i);
	 	}
	 }
	 getchar();
 }
