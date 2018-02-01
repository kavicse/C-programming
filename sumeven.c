#include<stdio.h>
void main()
{
int a,b,sum;
printf("Enter number");
scanf("%d%d",&a,&b);
sum=a+b;
if(sum%2==0)
{
printf("\nEven");
}
else
{
printf("\nOdd");
}
}
