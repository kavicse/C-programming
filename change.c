#include<stdio.h>
void main()
{
	int a[100],n,i,j;
	printf("enter the n value\n");
	scanf("%d",&n);
	{
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	}                     
	for(i=0;i<n;i++)
	{
	 if(a[i]>a[i+1])
	 {
	   j=i;
	  break;
	   
	 }
	}
	printf("%d",j+1);
}
