#include<stdio.h>
void main()
{
int a,b,temp;
printf("Before Swapping");
scanf("%d%d",&a,&b);
printf("After swapping");
temp=a;
a=b;
b=temp;

printf("%d%d",a,b);
}
