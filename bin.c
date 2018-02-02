#include <stdio.h>

int main()
{
	int num,temp,count=0,newn;
	printf("\nEnter the number: ");
	scanf("%d",&num);
	newn=num;
	while(num!=0)
	{
		temp=num%10;
		count=0;
		if(temp==1||temp==0)
		{
			count=1;
		}
		else
		{
			break;
		}
		num=num/10;
	}
	if(count==1)
	{
		printf("\nThe number %d is binary",newn);
	}
	else
	{
		printf("\nThe number %d is not binary",newn);
	}
	return 0;
}
