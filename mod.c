#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c,d;
	printf("\nEnter the values a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	d=a*b%c;
	printf("\nAnswer:%d",d);
}
