#include<stdio.h>
void main()
{
	int N,n,sum=0,i;
	printf("\nEnter the number");
	scanf("%d",&N);
	printf("\nEnter values");
	for(i=0;i<N;i++)
	{
	   scanf("%d",&n);
	   sum=sum+n;
	}
	printf("%d",sum);

}
