
#include<stdio.h>
int main()
{ 
	int num,a[50],i;
	printf("\n enter the limit:");
	scanf("%d",&num);
	printf("\n enter the numbers");
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<num;i++)
	{
	printf("\n the number and index value is %d %d",a[i],i);
        }
	return 0;
}
