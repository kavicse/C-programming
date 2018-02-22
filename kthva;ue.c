#include<stdio.h>
void main()
{
	int n,k,a[6],i;
	printf("\nEnter the n number");
	scanf("%d",&n);
	printf("\nEnter values");
	for(i=0;i<n;i++)
	{
	   scanf("%d",&a[i]);
	}
	printf("\nEnter k value");
	scanf("%d",&k);
    printf("%d",a[k-1]);

    
}
