#include<stdio.h>
void main()
{
	int n,pr=1,x;
	printf("\nEnter number");
	scanf("%d",&n);
	while(n!=0)
	{
		x=n%10;
		pr=pr*x;
		n=n/10;
	}
	printf("\nProduct:%d",pr);
}
