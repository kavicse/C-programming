#include<stdio.h>
void main()
{
	int a=0,b=1,c=0,limit,ans;
	printf("\nEnter limit");
	scanf("%d",&limit);
	printf("\nFibonacci series is:\n %d\n%d",a,b);
	while(c<limit)
	{
	
		ans=a+b;
		printf("\n%d",ans);
		c++;
		a=b;
		b=ans;
	}
}
