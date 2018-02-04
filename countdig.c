#include<stdio.h>
int main()
{
int n,sum=0;
printf("\nenter number");
scanf("%d",&n);
while(n>0)
{
	n=n/10;
	sum=sum+1;
}
printf("\nDigits:%d",sum);
return 0;
}
