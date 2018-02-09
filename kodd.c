#include<stdio.h>
void main()
{
int a[10],i,n,count,j,k;
printf("enter the range\n");
scanf("%d",&n);
scanf("%d",&k);
printf("enter the array values\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    if(a[i]%2!=0)
    {
        count++;
    }
    if(count==k)
    {
        printf("%d",a[i]);
        break;
    }
}
}
