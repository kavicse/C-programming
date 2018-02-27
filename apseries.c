#include<stdio.h>
void main()
{
    int a,d,n,sum,l,A,B,C;
    printf("\n Enter a value");
    scanf("%d",&A);
     printf("\n Enter d value");
    scanf("%d",&B);
    printf("\n Enter n value");
    scanf("%d",&C);
    a=A;
    d=B;
    n=C;
    l=(n*d)+a-1;
    sum=((a+l)*n)/2;
    printf("AP series:%d",sum);
}
