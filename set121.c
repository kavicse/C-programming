#include<stdio.h>
void main()
{
	int n,count=0;
	printf("\nEnter number");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	printf("\nNumber of digits is :%d",count);
}
