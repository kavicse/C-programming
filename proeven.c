#include<stdio.h>
void main()
{
int n,n1,p;
printf("Enter two values:");
scanf("%d%d",&n,&n1);
p=n*n1;
if(p%2==0)
{
printf("Even");
}
else
{
printf("odd");
}
}
