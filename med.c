#include <stdio.h>

int main()
{
	int i,j,n,num[10],temp,k;
	printf("\nEnter the number");
	scanf("%d",&n);
	printf("\nValues");
	for(k=0;k<n;k++)
	{
	    scanf("\n %d",&num[k]);
	}

	printf("The medium element");
n=(n+1)/2-1;
printf("%d",num[n]);

	return 0;
}
