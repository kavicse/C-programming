#include<stdio.h>
void main()
{
	int n,k;
	printf("Enter  N number");
	scanf("%d",&n);
	printf("Enter K value");
	scanf("%d",&k);
	int i,sum=0;
	for(i=1;i<=n;i++)
	{
		printf("%d",i);
		
	}
	for(i=1;i<=k;i++)
	{
		sum=sum+i;
		printf("Sum is %d\n",sum);
	}

}
