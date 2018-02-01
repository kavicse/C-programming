#include<stdio.h>
void main()
{
int a,b;
printf("Before Swapping");
scanf("%d%d",&a,&b);
printf("After swapping");
a^=b,b^=a,a^=b;
printf("%d%d",a,b);
}
