#include<stdio.h>
void main()
{
	int n,power=2,a,b=1,i,num;
	printf("\nEnter number");
	scanf("%d",&num);
	n=num;
	while(n!=0)
	{
		n=n/10;
		a++;
	}
	for(i=0;i<a+1;i++)
	{
		b=b*power;
	}
	printf("\nThe nearest greatest power 2 for %d is %d",num,b);
}
