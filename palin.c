#include<stdio.h>
void main()
{
int n,d=0,sum=0,num;
printf("\n Enter number");
scanf("%d",&num);
n=num;
while(n!=0)
{
d=n%10;
sum=sum*10+d;
n=n/10;
}
printf("\n %d",sum);
if(num==sum)
{
printf("\n Palindrome");
}
else
{
printf("\n Not Palindrome");
}
}
