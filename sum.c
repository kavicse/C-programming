#include<stdio.h>
void main()
{
	int n,sum=0,i;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
		printf("The Sum of %d numbers is %d",n,sum);
	}
}
