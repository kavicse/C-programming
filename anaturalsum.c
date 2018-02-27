#include<stdio.h>
void main()
{
  int n,i,sum=0;
  printf("\nEnter natural number");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    sum=sum+i;
  }
  printf("\nThe sum of natural numbers is :%d",sum);
}
