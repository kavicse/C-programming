#include<stdio.h>
int main()
{
int n,l,k,i,count=0;
printf("\nEnter the number");
scanf("%d",&n);
printf("\nEnter the range");
scanf("%d%d",&l,&k);
for(i=l;i<=k;i++)
{
if(i==n)
{
count++;
}
}
if(count>0)
printf("\nYes");
else
printf("\nNo");
}
