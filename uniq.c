#include<stdio.h>
void main()
{
int a[20],n,i,j,count=0;
printf("\nEnter the numbers");
scanf("%d",&n);
printf("\nArray values");
for(i=1;i<=n;i++)
{
	scanf("\n%d",&a[i]);
}
for(i=0;i<=n;i++)
{
	for(j=i+1;j<=n;j++)
	{
		if(a[i]==a[j])
		{
			printf("%d",a[i]);
			count=count+1;
		}
	}
}
if(count==0)
{
	printf("UNIQUE");
}
}
