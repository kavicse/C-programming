#include<stdio.h>
void main()
{
	int a[10],size,i,j,temp,avg,count=0;
	printf("\nEnter the size of array");
	scanf("%d",&size);
	printf("\nEnter values:");
for(i=0;i<size;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<size;i++)
{
	for(j=i;j<size;j++)
	{
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}
for(i=0;i<size;i++){

printf("\n%d",a[i]);
}

printf("\nthe  largest %d",a[i-1]);
printf("\nthe smallest value is %d",a[0]);

}
