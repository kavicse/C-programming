#include<stdio.h>
int main()
{ 
	int n,a[50],i;
	printf("\n enter the limit:");
	scanf("%d",&n);
	printf("\n enter the number one by one");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	printf("\n the number is %d ",a[i]);
	printf("\n the index value is %d",i);
        }
	return 0;
}
