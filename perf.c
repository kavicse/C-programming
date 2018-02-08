#include<stdio.h>
void main()
{
int m,n,mul,p,count;
printf("\nEnter the numbers");
scanf("%d%d",&m,&n);
mul=m*n;
for(p=0;p<1000;p++)
{
if(mul==p*p)
{
count++;
}
}
if(count>0)
{
printf("\nPerfect Square");
}
else
{
printf("\nNot Perfect Square");
}
}



