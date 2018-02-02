#include<stdio.h>
int main()
{
int n,i,count=0;
printf("\nEnter the number");
scanf("%d",&n);
for(i=2;i<=n;i++)
{
	if(n%i==0)
	{
	count++;
	}
}
	if(count==1)
	{
		printf("\nPrime Number");
	}
	else
	{
		printf("\nNot prime number");
	}
	return 0;

}
