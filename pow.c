#include<stdio.h>
void main()
{
int base,exp,result=1;
printf("\n Enter the base");
scanf("%d",&base);
printf("\n Enter the exponent");
scanf("%d",&exp);
while(exp!=0)
{
result*=base;
--exp;
}
printf("\n Result is:",result);
}
