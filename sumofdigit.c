#include<stdio.h>
void main()
{
int n,x,sum;
printf("\nEnter the number");
scanf("%d",&n);
while(n>0)
{
x=n%10;
sum=sum+x;
n=n/10;
}
printf("%d",sum);
}
