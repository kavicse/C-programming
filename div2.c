#include<stdio.h>

void main()
{
int a[10],n,i;

printf("Enter n value:");
scanf("%d",&n);
printf("Enter the numbers:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Answer:");
for(i=0;i<n;i++)
{
if(a[i]%2==0)
{
printf("\n%d",a[i]/2);
}
else
{
printf("\n%d",a[i]);
}
}

}
