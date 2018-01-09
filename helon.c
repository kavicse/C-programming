#include<stdio.h>
void main()
{
	char a[50]="HELLO";
	int n;
	printf("Enter the number of times to print");
	scanf("%d",&n);
	int i=0;
	for(i=0;i<n;i++)
	{
		printf("\n%s",a);
	}
}
