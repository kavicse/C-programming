#include<stdio.h>
void main()
{
int n,count=0;
printf("\n Enter the number");
scanf("%d",&n);
while(n!=0)
{
n/=10;
++count;
}
printf(" The number of digits is %d",count);
}
