#include<stdio.h>
void main()
{
	int a=0,b=1,c=0,end,ans;
	printf("\nEnter end");
	scanf("%d",&end);
	printf("\nFibonacci series is:\n %d\n%d",a,b);
	while(c<end)
	{
	
		ans=a+b;
		printf("\n%d",ans);
		c++;
		a=b;
		b=ans;
	}
}
