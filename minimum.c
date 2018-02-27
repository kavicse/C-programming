#include <stdio.h>

int main()
{
	int i,j,n,a[10],temp,k;
	printf("\nEnter the number");
	scanf("%d",&n);
	printf("\nValues");
	for(k=0;k<n;k++)
	{
	    scanf("\n %d",&a[k]);
	}
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
		{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		
		}
	}
	
}
	printf("The minimum number is :%d\t",a[0]);
	return 0;
}
