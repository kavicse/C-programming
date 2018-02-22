#include<stdio.h>
void main()
{
	int n,r=0,x;
	printf("\nEnter number");
	scanf("%d",&n);
	while(n!=0)
	{
		x=n%10;
		r=r*10+x;
		n=n/10;
	}
	printf("\nProduct:%d",r);
}
