#include<stdio.h>
void main()
{
    int a,d,n,sum,l;
    printf("\n Enter a value");
    scanf("%d",&a);
     printf("\n Enter n value");
    scanf("%d",&n);
     printf("\n Enter d value");
    scanf("%d",&d);
    l=(n*d)+a-1;
sum=((a+l)*n)/2;
    printf("\n A.P is %d",sum);
    }
