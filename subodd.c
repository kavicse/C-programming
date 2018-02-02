#include<stdio.h>
void main()
{
	int a,b,c;
	printf("\nEnter two values");
	scanf("%d%d",&a,&b);
	c=a-b;
	if(c%2==0)
	{
		printf("\nEven number");
	}
	else
	{
		printf("\nOdd number");
	}
}
